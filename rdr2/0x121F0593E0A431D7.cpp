// braithwaites2.ysc @ L52086
void func_1242(float fParam0, var uParam1)
{
  if (func_1778(Global_35, Local_14.f_19[0], 0))
  {
    VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(Local_14.f_19[0], (fParam0 * 3.34f));
  }
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_14.f_19[0], 0) && func_1256(uParam1) < 4)
  {
    TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_14.f_19[0], 4f);
  }
}