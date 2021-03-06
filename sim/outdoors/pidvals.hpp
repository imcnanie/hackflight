/*
   pidvals.hpp : PID values for a specific vehicle

   This file is part of Hackflight.

   Hackflight is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   Hackflight is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with Hackflight.  If not, see <http://www.gnu.org/licenses/>.
 */

// Level (accelerometer): set values to 0 for "rate mode"
static const float CONFIG_LEVEL_P            = 1.0;
static const float CONFIG_LEVEL_I            = 0.005;

// Rate (gyro): P must be positive
static const float  CONFIG_RATE_PITCHROLL_P  = 1.0;
static const float  CONFIG_RATE_PITCHROLL_I  = 0;
static const float  CONFIG_RATE_PITCHROLL_D  = 0;

// Yaw: P must be positive
static const float  CONFIG_YAW_P             = 1.0;
static const float  CONFIG_YAW_I             = 0;

// For altitude hover
#define CONFIG_HOVER_ALT_P        15  //128
#define CONFIG_HOVER_ALT_I        0  //25
#define CONFIG_HOVER_ALT_D        2 //24


