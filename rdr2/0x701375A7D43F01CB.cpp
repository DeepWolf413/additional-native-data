// cornwall1.ysc @ L74947
void func_1859(var uParam0, var uParam1, float fParam2, float fParam3, bool bParam4)
{
  int iVar0;
  int iVar1;

  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("cornwall1_RouteFromBarn", ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), &iVar0);
  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("cornwall1_RouteFromBarn", ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), &iVar1);
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*uParam0, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*uParam0))
  {
    if (iVar0 > iVar1 || func_888(*uParam0, *uParam1, fParam2, 1))
    {
      TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam0, (1.5f + 0.25f), 0, func_1532(bParam4, -1f, 0.8f), 0);
    }
    else if (iVar0 < iVar1 && !func_888(*uParam0, *uParam1, fParam3, 1))
    {
      TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam0, 3f, 0, func_1532(bParam4, -1f, 0.8f), 0);
    }
    else
    {
      TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam0, 2f, 0, func_1532(bParam4, -1f, 0.8f), 0);
    }
  }
}