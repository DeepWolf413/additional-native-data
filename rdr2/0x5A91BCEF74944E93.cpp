// startup.ysc @ L10209
bool func_371(int iParam0)
{
  int iVar0;

  if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
  {
    return false;
  }
  if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
  {
    return false;
  }
  if (!func_367(Global_262777[iParam0 /*74*/].f_1.f_60, func_443(&(Global_262777[iParam0 /*74*/].f_1), 32768)))
  {
    return false;
  }
  if (func_444(&(Global_262777[iParam0 /*74*/].f_1)))
  {
    return false;
  }
  iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
  Global_262777[iVar0 /*74*/].f_1 = iParam0;
  Global_262777[iVar0 /*74*/].f_1.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
  NETWORK::_0x5A91BCEF74944E93(iParam0, 30f);
  return true;
}