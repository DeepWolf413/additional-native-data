// utopia2.ysc @ L95651
bool func_2568(bool bParam0)
{
  if (bParam0)
  {
    if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
    {
      return false;
    }
  }
  if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
  {
    return false;
  }
  if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
    {
      if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
      {
        return false;
      }
    }
  }
  return true;
}