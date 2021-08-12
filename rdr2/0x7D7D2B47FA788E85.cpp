// abigail2_1.ysc @ L64162
void func_1740(int iParam0, float fParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
    {
      TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, 0, -1082130432 /* Float: -1f */, 0);
    }
  }
}