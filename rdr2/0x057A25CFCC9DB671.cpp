// mob5.ysc @ L70738
void func_1760()
{
  int iVar0;

  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_147[0 /*8*/], 0))
  {
    iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_147[0 /*8*/]);
    if (iVar0 >= 34)
    {
      TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Local_147[0 /*8*/], 2304.528f, -1223.638f, 42.9805f, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1082130432 /* Float: -1f */);
    }
    else if (iVar0 > 23 && iVar0 < 30)
    {
      TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Local_147[0 /*8*/], 2310.135f, -1217.155f, 45.6171f, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1082130432 /* Float: -1f */);
    }
    else if (iVar0 > 18)
    {
      TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Local_147[0 /*8*/], 2319.595f, -1224.483f, 46.0191f, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1082130432 /* Float: -1f */);
    }
    else if (iVar0 > 11)
    {
      TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Local_147[0 /*8*/], 2338.062f, -1222.608f, 45.9219f, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1082130432 /* Float: -1f */);
    }
    else if (iVar0 > 6)
    {
      TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Local_147[0 /*8*/], 2318.213f, -1215.54f, 45.2407f, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1082130432 /* Float: -1f */);
    }
  }
}