// fm_mission_controller.ysc @ L366663
int func_5325(int iParam0)
{
  if (func_5326(iParam0))
  {
    PAD::DISABLE_CONTROL_ACTION(0, 86, true);
    PAD::DISABLE_CONTROL_ACTION(0, 74, true);
    return (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 86) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 74));
  }
  else
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0) && VEHICLE::IS_VEHICLE_SIREN_ON(iParam0))
    {
      VEHICLE::SET_VEHICLE_SIREN(iParam0, false);
    }
    PAD::DISABLE_CONTROL_ACTION(0, 51, true);
    return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51);
  }
  return 0;
}