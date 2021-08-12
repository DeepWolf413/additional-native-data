// beat_del_lobo_posse.ysc @ L9134
void func_194()
{
  switch (iLocal_597)
  {
    case 0:
      if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_372[0], 0))
      {
        TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 1.75f, 1, -1f, 0);
      }
      else
      {
        TASK::_0xBAAB791AA72C2821(uLocal_372[0], 1.75f);
      }
      if (func_233(uLocal_372[0], 1, 1) <= 50f)
      {
        iLocal_597 = 1;
      }
      break;
    case 1:
      if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_372[0], 0))
      {
        TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 2.001f, 1, -1f, 0);
      }
      else
      {
        TASK::_0xBAAB791AA72C2821(uLocal_372[0], 2.001f);
      }
      break;
  }
}