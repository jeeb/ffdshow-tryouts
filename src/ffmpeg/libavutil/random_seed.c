/*
 * Copyright (c) 2009 Baptiste Coudurier <baptiste.coudurier@gmail.com>
 *
 * This file is part of Libav.
 *
 * Libav is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <math.h>
#include <time.h>
#include "timer.h"
#include "random_seed.h"

static uint32_t get_generic_seed(void)
{
    clock_t last_t  = 0;
    int bits        = 0;
    uint64_t random = 0;
    unsigned i;
    float s = 0.000000000001;

    for (i = 0; bits < 64; i++) {
        clock_t t = clock();
        if (last_t && fabs(t - last_t) > s || t == (clock_t) -1) {
            if (i < 10000 && s < (1 << 24)) {
                s += s;
                i = t = 0;
            } else {
                random = 2 * random + (i & 1);
                bits++;
            }
        }
        last_t = t;
    }
#ifdef AV_READ_TIME
    random ^= AV_READ_TIME();
#else
    random ^= clock();
#endif

    random += random >> 32;

    return random;
}

uint32_t av_get_random_seed(void)
{
    return get_generic_seed();
}
