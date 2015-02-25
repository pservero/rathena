// Copyright (c) PServeRO http://pservero.com - Licensed under GNU GPL
// For more information, see LICENCE in the main folder
#ifndef _CONFIG_PSERVERO_H_
#define _CONFIG_PSERVERO_H_

/** Custom Source Configs by PServeRO http://pservero.com **/

/// Display map description when player changes map[Cydh/PServeRO]
#define PROJECT_DISPLAY_MAP_DESC

/// Global Damage Adjustment [Cydh/PServeRO]
/// See conf/battle/pservero.conf and doc/mapflags.txt
#define PROJECT_GLOBAL_DAMAGE_RATE

/// Various map adjustment for skill variables in each map [Cydh/PServeRO]
/// - 'skill_maxcount'  : Change max count
/// - 'skill_cast'      : Change variable cast time
/// - 'skill_fixed_cast': Change fixed cast time
/// - 'skill_actdelay'  : Change act delay
/// - 'skill_walkdelay' : Change walk delay
/// - 'skill_duration'  : Change duration
/// - 'skill_duration2' : Change duration2
/// - 'skill_cooldown'  : Change cooldown
#define PROJECT_SKILL_MAP_ADJUSTMENT

/// Disable stat sending to stats.rathena.org
#ifndef STATS_OPT_OUT
#define STATS_OPT_OUT
#endif

#endif // _CONFIG_PSERVERO_H_
