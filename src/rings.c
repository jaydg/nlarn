/*
 * rings.c
 * Copyright (C) Joachim de Groot 2009 <jdegroot@web.de>
 *
 * NLarn is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * NLarn is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "nlarn.h"

const ring_data rings[RT_MAX] =
{
    /* type            name                  effect           price ob */
    { RT_NONE,         "",                   ET_NONE,            0, 0, },
    { RT_EXTRA_REGEN,  "extra regeneration", ET_INC_HP_REGEN, 1000, 1, },
    { RT_REGENERATION, "regeneration",       ET_INC_HP_REGEN,  220, 1, },
    { RT_PROTECTION,   "protection",         ET_PROTECTION,    150, 0, },
    { RT_ENERGY,       "energy",             ET_INC_MP_REGEN,  180, 1, },
    { RT_DEXTERITY,    "dexterity",          ET_INC_DEX,       120, 1, },
    { RT_STRENGTH,     "strength",           ET_INC_STR,        85, 1, },
    { RT_CLEVERNESS,   "cleverness",         ET_INC_INT,       120, 1, },
    { RT_INC_DAMAGE,   "increase damage",    ET_INC_DAMAGE,    125, 0, },
};

static int ring_material_mapping[RT_MAX - 1] = { 0 };

static const int ring_materials[RT_MAX - 1] =
{
    IM_GOLD,
    IM_SILVER,
    IM_PLATINUM,
    IM_SILVER,
    IM_COPPER,
    IM_STEEL,
    IM_GLASS,
    IM_BONE
};

void ring_material_shuffle()
{
    shuffle(ring_material_mapping, RT_MAX - 1, 0);
}

item_material_t ring_material(int ring_id)
{
    assert(ring_id > RT_NONE && ring_id < RT_MAX);
    return ring_materials[ring_material_mapping[ring_id - 1]];
}