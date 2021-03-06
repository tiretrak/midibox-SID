; $Id: sid_presets.inc 790 2009-06-04 19:16:22Z tk $
;
; MIDIbox SID
; Presets (EEPROM content)
;
; ==========================================================================
;
;  Copyright 1998-2007 Thorsten Klose (tk@midibox.org)
;  Licensed for personal non-commercial use only.
;  All other rights reserved.
; 
; ==========================================================================

        ERRORLEVEL      -220    ; suppress "Address exceeds maximum range for this processor."
	;; this is (unfortunately) required for gpasm

;; ==========================================================================
;; default patch
;; ==========================================================================
	org	0xf00000	; eeprom base address
EEPROM_PRESET
#include "src/sid_preset_lead.inc"


;; ==========================================================================
;; default ensemble
;; ==========================================================================
	org	0xf00200
EEPROM_ENSEMBLE
#include "src/sid_preset_ens.inc"


;; ==========================================================================
;; misc parameters which are stored in internal EEPROM
;; ==========================================================================
	org	0xf00300
EEPROM_MISC
EEPROM_DEFAULT_ENS
#if 0
	db	0x01, 0x00	; default ensemble (use 1 instead of 0, so that a BankStick based ensemble is used)
#else
	db	0x01, 0x00	; this was too confusing...
	;; new:	select 0 after app. upload, and once an Ensemble BankStick has been detected, switch to 1 if ensemble was 0 before
	;; this is done in CS_MENU_BANK_RestoreCfg_Tst
#endif