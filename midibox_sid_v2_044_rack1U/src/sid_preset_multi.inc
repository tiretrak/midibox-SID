; $Id: sid_preset_multi.inc 869 2009-12-08 21:52:43Z tk $
;
; MIDIbox SID
; Multi Patch Preset
; (included from sid_patch.inc for runtime re-initialisation)
;
; ==========================================================================
;
;  Copyright 1998-2007 Thorsten Klose (tk@midibox.org)
;  Licensed for personal non-commercial use only.
;  All other rights reserved.
; 
; ==========================================================================

	db      'M','u','l','t','i',' ','P','a','t','c','h',' ',' ',' ',' ',' '

	;;      ENGINE  HWFLAGS  OPT1  OPT2  Swtch -     -     -
	db	0x03,   0x00,    0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	;;      PAR1  PAR2  INIT  MIN   MAX     PAR1  PAR2  INIT  MIN   MAX
	db	0x00, 0x00, 0x80, 0x00, 0xff,   0x00, 0x00, 0x80, 0x00, 0xff	; Knob1/2
	db	0x00, 0x00, 0x80, 0x00, 0xff,   0x00, 0x00, 0x80, 0x00, 0xff	; Knob3/4
	db	0x00, 0x00, 0x80, 0x00, 0xff,   0x00, 0x00, 0x80, 0x00, 0xff	; Knob5/Vel
	db	0x00, 0x00, 0x80, 0x00, 0xff,   0x00, 0x00, 0x80, 0x00, 0xff	; PB/Aftertouch

	;;	EXT Parameters 1-8 - 16 bit values (low/high), normaly used as AOUT offset
	db	0x00, 0x80	; AOUT#1
	db	0x00, 0x80	; AOUT#2
	db	0x00, 0x80	; AOUT#3
	db	0x00, 0x80	; AOUT#4
	db	0x00, 0x80	; AOUT#5
	db	0x00, 0x80	; AOUT#6
	db	0x00, 0x80	; AOUT#7
	db	0x00, 0x80	; AOUT#8

	;;	FLAGS  res   VOL  res
	db	0x00,  0x00, 0x7f, 0x00

	;;	C/M    CutOff      Res.  -     -
	db	0x10,  0x00, 0x02, 0x00, 0x00, 0x00	; Filter1
	db	0x10,  0x00, 0x02, 0x00, 0x00, 0x00	; Filter2


	;; Instrument #1
	;;	Flgs  Wave   AD    SR   PW_L  PW_H  Res1  Delay Trns  Fine  PRng  Port. ArpM  A.S/D A.G/R Res2
	db	0x00, 0x04, 0x00, 0xfa, 0x00, 0x08, 0x00, 0x00, 0x40, 0x80, 0x02, 0x00, 0x00, 0x5f, 0x05, 0x00
	;;	Flgs2 VoiA  VelA  PtchA L1Md  L1DP  L1Rt  L1Dl  L1Ph  L1DPW L1DF  L2Md  L2DP  L2Rt  L2Dl  L2Ph
	db	0x08, 0x00, 0x00, 0x79, 0x01, 0x80, 0x06, 0x00, 0x00, 0xc0, 0x80, 0x01, 0x80, 0x16, 0x00, 0x00
	;;	L2DPW L2DF  EMod  EDPi  EDPW  EDFl  EAtt  EDec  ESus  ERel  ECur  WTSp  WTAs  WTBg  WTEn  WTLp
	db	0x90, 0x80, 0x00, 0x80, 0x80, 0x80, 0x30, 0x30, 0x40, 0x20, 0x80, 0xc7, 0x00, 0x00, 0x0f, 0xd0

	;; Instrument #2
	;;	Flgs  Wave   AD    SR   PW_L  PW_H  Res1  Delay Trns  Fine  PRng  Port. ArpM  A.S/D A.G/R Res2
	db	0x00, 0x04, 0x00, 0xfa, 0x00, 0x08, 0x00, 0x00, 0x40, 0x80, 0x02, 0x00, 0x00, 0x5f, 0x05, 0x00
	;;	Flgs2 VoiA  VelA  PtchA L1Md  L1DP  L1Rt  L1Dl  L1Ph  L1DPW L1DF  L2Md  L2DP  L2Rt  L2Dl  L2Ph
	db	0x08, 0x00, 0x00, 0x79, 0x01, 0x80, 0x06, 0x00, 0x00, 0xc0, 0x80, 0x01, 0x80, 0x16, 0x00, 0x00
	;;	L2DPW L2DF  EMod  EDPi  EDPW  EDFl  EAtt  EDec  ESus  ERel  ECur  WTSp  WTAs  WTBg  WTEn  WTLp
	db	0x90, 0x80, 0x00, 0x80, 0x80, 0x80, 0x30, 0x30, 0x40, 0x20, 0x80, 0xc7, 0x00, 0x10, 0x1f, 0xd0

	;; Instrument #3
	;;	Flgs  Wave   AD    SR   PW_L  PW_H  Res1  Delay Trns  Fine  PRng  Port. ArpM  A.S/D A.G/R Res2
	db	0x00, 0x04, 0x00, 0xfa, 0x00, 0x08, 0x00, 0x00, 0x40, 0x80, 0x02, 0x00, 0x00, 0x5f, 0x05, 0x00
	;;	Flgs2 VoiA  VelA  PtchA L1Md  L1DP  L1Rt  L1Dl  L1Ph  L1DPW L1DF  L2Md  L2DP  L2Rt  L2Dl  L2Ph
	db	0x08, 0x00, 0x00, 0x79, 0x01, 0x80, 0x06, 0x00, 0x00, 0xc0, 0x80, 0x01, 0x80, 0x16, 0x00, 0x00
	;;	L2DPW L2DF  EMod  EDPi  EDPW  EDFl  EAtt  EDec  ESus  ERel  ECur  WTSp  WTAs  WTBg  WTEn  WTLp
	db	0x90, 0x80, 0x00, 0x80, 0x80, 0x80, 0x30, 0x30, 0x40, 0x20, 0x80, 0xc7, 0x00, 0x20, 0x2f, 0xd0

	;; Instrument #4
	;;	Flgs  Wave   AD    SR   PW_L  PW_H  Res1  Delay Trns  Fine  PRng  Port. ArpM  A.S/D A.G/R Res2
	db	0x00, 0x04, 0x00, 0xfa, 0x00, 0x08, 0x00, 0x00, 0x40, 0x80, 0x02, 0x00, 0x00, 0x5f, 0x05, 0x00
	;;	Flgs2 VoiA  VelA  PtchA L1Md  L1DP  L1Rt  L1Dl  L1Ph  L1DPW L1DF  L2Md  L2DP  L2Rt  L2Dl  L2Ph
	db	0x08, 0x00, 0x00, 0x79, 0x01, 0x80, 0x06, 0x00, 0x00, 0xc0, 0x80, 0x01, 0x80, 0x16, 0x00, 0x00
	;;	L2DPW L2DF  EMod  EDPi  EDPW  EDFl  EAtt  EDec  ESus  ERel  ECur  WTSp  WTAs  WTBg  WTEn  WTLp
	db	0x90, 0x80, 0x00, 0x80, 0x80, 0x80, 0x30, 0x30, 0x40, 0x20, 0x80, 0xc7, 0x00, 0x30, 0x3f, 0xd0

	;; Instrument #5
	;;	Flgs  Wave   AD    SR   PW_L  PW_H  Res1  Delay Trns  Fine  PRng  Port. ArpM  A.S/D A.G/R Res2
	db	0x00, 0x04, 0x00, 0xfa, 0x00, 0x08, 0x00, 0x00, 0x40, 0x80, 0x02, 0x00, 0x00, 0x5f, 0x05, 0x00
	;;	Flgs2 VoiA  VelA  PtchA L1Md  L1DP  L1Rt  L1Dl  L1Ph  L1DPW L1DF  L2Md  L2DP  L2Rt  L2Dl  L2Ph
	db	0x08, 0x00, 0x00, 0x79, 0x01, 0x80, 0x06, 0x00, 0x00, 0xc0, 0x80, 0x01, 0x80, 0x16, 0x00, 0x00
	;;	L2DPW L2DF  EMod  EDPi  EDPW  EDFl  EAtt  EDec  ESus  ERel  ECur  WTSp  WTAs  WTBg  WTEn  WTLp
	db	0x90, 0x80, 0x00, 0x80, 0x80, 0x80, 0x30, 0x30, 0x40, 0x20, 0x80, 0xc7, 0x00, 0x40, 0x4f, 0xd0

	;; Instrument #6
	;;	Flgs  Wave   AD    SR   PW_L  PW_H  Res1  Delay Trns  Fine  PRng  Port. ArpM  A.S/D A.G/R Res2
	db	0x00, 0x04, 0x00, 0xfa, 0x00, 0x08, 0x00, 0x00, 0x40, 0x80, 0x02, 0x00, 0x00, 0x5f, 0x05, 0x00
	;;	Flgs2 VoiA  VelA  PtchA L1Md  L1DP  L1Rt  L1Dl  L1Ph  L1DPW L1DF  L2Md  L2DP  L2Rt  L2Dl  L2Ph
	db	0x08, 0x00, 0x00, 0x79, 0x01, 0x80, 0x06, 0x00, 0x00, 0xc0, 0x80, 0x01, 0x80, 0x16, 0x00, 0x00
	;;	L2DPW L2DF  EMod  EDPi  EDPW  EDFl  EAtt  EDec  ESus  ERel  ECur  WTSp  WTAs  WTBg  WTEn  WTLp
	db	0x90, 0x80, 0x00, 0x80, 0x80, 0x80, 0x30, 0x30, 0x40, 0x20, 0x80, 0xc7, 0x00, 0x50, 0x5f, 0xd0



	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Wavetable Preload
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Wavetable Preload
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Wavetable Preload
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Wavetable Preload
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Wavetable Preload
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Wavetable Preload
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Wavetable Preload
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Wavetable Preload