// epsilon8.ysc @ L39165
void func_309()
{
  if (fLocal_252 == -1f)
  {
    TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_616[0]);
  }
  else if (ENTITY::GET_ENTITY_SPEED(iLocal_616[0]) > fLocal_252)
  {
    TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_616[0], fLocal_252);
  }
  else
  {
    TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_616[0]);
  }
}