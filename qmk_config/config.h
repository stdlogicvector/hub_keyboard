/*
Copyright 2020 KW

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       			0xFEED
#define PRODUCT_ID      			0x9002
#define MANUFACTURER    			KW
#define PRODUCT         			HUB-Keyboard
#define DESCRIPTION     			Keyboard with USB HUB
#define USB_MAX_POWER_CONSUMPTION	100

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Combo */
#define	TAPPING_TERM	200

/* I2C Speed */
/* Limited to 100kHz by PCF8574 */
#define F_SCL 100000UL

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

#ifdef SUBPROJECT_v1
    #include "v1/config.h"
#endif

#endif

