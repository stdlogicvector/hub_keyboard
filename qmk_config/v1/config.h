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

#ifndef V1_CONFIG_H
#define V1_CONFIG_H

#include "../config.h"

#define DEVICE_VER      0x0001

#define MATRIX_ROW_PINS { F4, F5, F6, F7, F0, F1 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, B7, D2, D3, D5, D4, D6, D7, B4, B5, B6, C6, C7, E6 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define COMBO_COUNT 	4

#endif