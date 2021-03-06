; $Id: sid_ext.inc 360 2008-06-21 20:03:46Z tk $
;
; AOUT and Gate pin handler
; 
; ==========================================================================
;
;  Copyright 1998-2007 Thorsten Klose (tk@midibox.org)
;  Licensed for personal non-commercial use only.
;  All other rights reserved.
; 
; ==========================================================================

;; --------------------------------------------------------------------------
;;  Called from USER_Tick to update the AOUT channels and gates
;; --------------------------------------------------------------------------
SID_EXT_Update
	;; disable interrupts to ensure data consistency
	IRQ_DISABLE

	;; forward inversion flags to AOUT driver
	movff	SID_LOCAL_ENS+SID_ENSx_AOUT_INVERTED, WREG
	call	AOUT_InvertedSet

	;; update AOUT channels
	call	AOUT_Update

	;; do nothing if gate bits have not been changed
	SET_BSR	GATES
	movf	GATES, W, BANKED
	xorwf	GATES_LAST, W, BANKED
	bz	SID_EXT_Update_Gates_Skip
SID_EXT_Update_Gates
	;; store new state
	movff	GATES, GATES_LAST

	;; forward digital pins to AOUT driver (only relevant for MAX525 based MBHP_AOUT module)
	movf	GATES, W, BANKED
#if 0
	xorlw	0x03		; optional inversion of digital pins
#endif
	call	AOUT_DigitalPinsSet

	;; optionally forward to DOUT
#if DEFAULT_EXT_SWITCH_DOUT
	movff	GATES, MIOS_PARAMETER1
	movlw	(DEFAULT_EXT_SWITCH_DOUT-1) & 0x0f
	call	MIOS_DOUT_SRSet
#endif

	;; optionally forward to J5
#if DEFAULT_J5_FUNCTION == 3
	SET_BSR	GATES
	movf	GATES, W, BANKED
#if 0
	xorlw	0x03		; optional inversion of digital pins
#endif
	call	J5_IO_Set
#endif

SID_EXT_Update_Gates_Skip

	;; enable interrupts again
	IRQ_ENABLE

	return
