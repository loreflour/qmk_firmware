/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

#include "config_common.h"
#include <serial_config.h>

#define USE_I2C
#define USE_SERIAL

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define FORCE_NKRO
#define ONESHOT_TIMEOUT 8000
#define TAPPING_TERM 300
#define HOLD_ON_OTHER_KEY_PRESS
#define RETRO_TAPPING
#define PERMISSIVE_HOLD
#define MOUSEKEY_MAX_SPEED 10
#define MOUSEKEY_TIME_TO_MAX 14
