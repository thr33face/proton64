/*
 * 'Proton-64' - C64/VIC20 keyboard to USB conversion
 * built in 2021 - thr33face
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include <config_common.h>

/* usb device descriptor */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xFAC1
#define DEVICE_VER      0x0001
#define MANUFACTURER    neco
#define PRODUCT         c64-proton-c
#define DESCRIPTION     mushy keeb

/* keyboard matrix definition */
#define MATRIX_ROWS 9
#define MATRIX_COLS 9
#define MATRIX_ROW_PINS { B9, A1, A0, B8, B13, B14, B15, A2, B0 }
#define MATRIX_COL_PINS { A9, A10, B7, B2, B5, B4, B3, B6, B1 }
#define DIODE_DIRECTION COL2ROW
#define MATRIX_HAS_GHOST
#define DEBOUNCE 3
