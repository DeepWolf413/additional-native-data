// rcm_native2.ysc @ L24088
bool func_852()
{
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_114, 0) && TASK::GET_PED_WAYPOINT_DISTANCE(iLocal_114) > 370f)
  {
    return true;
  }
  return false;
}