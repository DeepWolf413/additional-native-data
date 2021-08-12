// agency_heist3a.ysc @ L129505
void func_960()
{
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1019[0 /*32*/]))
  {
    fLocal_4979 = TASK::GET_PED_WAYPOINT_DISTANCE(Local_1019[0 /*32*/]);
    fLocal_4981 = (fLocal_4977 - fLocal_4979);
    if (fLocal_4981 > 12f)
    {
    }
    if (iLocal_4669)
    {
      if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_1019[0 /*32*/]))
      {
        TASK::WAYPOINT_PLAYBACK_RESUME(Local_1019[0 /*32*/], false, -1, 0);
      }
      iLocal_4669 = 0;
    }
    if (fLocal_4981 <= -20f)
    {
      if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_1019[0 /*32*/]))
      {
        TASK::WAYPOINT_PLAYBACK_PAUSE(Local_1019[0 /*32*/], true, false);
      }
    }
    TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1019[0 /*32*/], 2f, false);
  }
}