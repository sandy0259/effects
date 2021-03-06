/* GNU Guitar
 * Tremolo effect
 * Copyright (C) 2000,2001,2003 Max Rudensky <fonin@ziet.zhitomir.ua>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * $Id$
 */

#ifndef GNU_GUITAR_EFFECTS_TREMOLO_H
#define GNU_GUITAR_EFFECTS_TREMOLO_H

#include <gnu-guitar/effects/effect.h>

#ifdef __cplusplus
extern "C" {
#endif

effect_t *tremolo_create(void);

struct tremolo_params {
    float tremolo_amplitude;
    float tremolo_speed;
    float tremolo_phase;
};

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* GNU_GUITAR_EFFECTS_TREMOLO_H */
