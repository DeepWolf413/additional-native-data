// assassin_hooker.ysc @ L10800
int func_223()
{
  int iVar0;
  
  if (iLocal_1461 >= 3)
  {
    if (iLocal_1461 < 6 || (((iLocal_1461 == 6 && !ENTITY::IS_ENTITY_DEAD(Local_1045.f_1, false)) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1045.f_1)) && TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_1045.f_1) <= 30))
    {
      iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(Local_2032, fLocal_2056, 0, 4);
      if (iVar0 != 0)
      {
        return 1;
      }
    }
  }
  return 0;
  return 0;
}