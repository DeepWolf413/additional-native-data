// fm_bj_race_controler.ysc @ L534826
void func_8961(bool bParam0, int iParam1)
{
  PLAYER::SET_POLICE_IGNORE_PLAYER(bParam0, true);
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
  {
    VEHICLE::SET_VEHICLE_IS_WANTED(iParam1, false);
    VEHICLE::_0x4AD280EB48B2D8E6(iParam1, true);
  }
  PLAYER::_0x4669B3ED80F24B4E(bParam0);
  PLAYER::_0x2F41A3BAE005E5FA(bParam0, -1082130432);
  PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(bParam0, false);
}