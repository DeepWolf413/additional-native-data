// braithwaites1.ysc @ L63970
int func_1428()
{
  var uVar0;

  if (ENTITY::IS_ENTITY_DEAD(iLocal_979[0]) || !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_979[0], func_525(71)))
  {
    return -1;
  }
  if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_525(71), ENTITY::GET_ENTITY_COORDS(iLocal_979[0], true, false), &uVar0))
  {
    return uVar0;
  }
  return -1;
}