/*
 * 'Proton-64' - C64/VIC20 keyboard to USB conversion
 * built in 2021 - thr33face
 *
 * C64 Keyboard connector pin out:
 *	 __________________________________________________________
 *	 o  o  o  o  o  o  o  o  o  o  o  o  o  o  o  o  o  o  .  o
 *	 ----------------------------------------------------------
 *	20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1
 *	R7 R1 R2 R3 R4 R5 R6 R0 C0 C1 C2 C7 C4 C5 C6 C3 5V RE NC GN
 *	
 *	Rows (connector pin / Proton C pin)
 *	20	B9
 *	19	A1
 *	18	A0
 *	17	B8
 *	16	B13
 *	15	B14
 *	14	B15
 *	13	A2
 *	
 *	Columns (connector pin / Proton C pin)
 *	12	A9
 *	11	A10
 *	10	B7
 *	09	B2
 *	08	B5
 *	07	B4
 *	06	B3
 *	05	B6
 *	
 *	Restore key row & column (connector pin / Proton C pin)
 *	02	NC
 *	03	B0 Restore Row
 *	01	B1 Restore Column
 */

#pragma once
#include <quantum.h>

/* 'SHIFT LOCK' is not visible in layout definiton as it is simply connected to the regular left-shift key (here: K71) */
#define LAYOUT( \
	 K71,  K70,  K73,  K10,  K13,  K20,  K23,  K30,  K33,  K40,  K43,  K50,  K53,  K60,  K63,  K00,      K04, \
	 K72,   K76,  K11,  K16,  K21,  K26,  K31,  K36,  K41,  K46,  K51,  K56,  K61,  K66,     K88,        K05, \
	K77,     K12,  K15,  K22,  K25,  K32,  K35,  K42,  K45,  K52,  K55,  K62,  K65,       K01,           K06, \
	K75,  K17, K14,  K27,  K24,  K37,  K34, K47,  K44,   K57,  K54,  K67,      K64,      K07,  K02,      K03,  K74 \
){	{	K00,	K01,	K02,	K03,	K04,	K05,	K06,	K07,	KC_NO	},	\
	{	K10,	K11,	K12,	K13,	K14,	K15,	K16,	K17,	KC_NO	},	\
	{	K20,	K21,	K22,	K23,	K24,	K25,	K26,	K27,	KC_NO	},	\
	{	K30,	K31,	K32,	K33,	K34,	K35,	K36,	K37,	KC_NO	},	\
	{	K40,	K41,	K42,	K43,	K44,	K45,	K46,	K47,	KC_NO	},	\
	{	K50,	K51,	K52,	K53,	K54,	K55,	K56,	K57,	KC_NO	},	\
	{	K60,	K61,	K62,	K63,	K64,	K65,	K66,	K67,	KC_NO	},	\
	{	K70,	K71,	K72,	K73,	K74,	K75,	K76,	K77,	KC_NO	},	\
	{	KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO,	K88		}	\
}
