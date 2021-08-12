// braithwaites2.ysc @ L52789
int func_1286()
{
  int iVar0;

  iVar0 = 0;
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_14.f_19[0], false, false))
  {
    if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_14.f_19[0], 0))
    {
      iVar0 = TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(Local_14.f_19[0]);
    }
  }
  return iVar0;
}