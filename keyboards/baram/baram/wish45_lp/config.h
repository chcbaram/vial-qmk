// Copyright 2023 Hancheol Cho (@chcbaram)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define FEE_PAGE_COUNT      8     // 2KB * 8 = 16KB
#define FEE_DENSITY_BYTES   4096  // 4KB