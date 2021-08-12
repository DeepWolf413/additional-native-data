// freemode.ysc @ L960837
void func_14900(bool bParam0, bool bParam1)
{
  int iVar0;
  
  func_2149(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 94232066, bParam1, 1, -1, 0, 0, 0);
  if (func_1102())
  {
    func_2079(-494565059, bParam0, &iVar0, 0, 1, 0);
  }
  else
  {
    MONEY::_NETWORK_EARN_FROM_RC_TIME_TRIAL(bParam0);
  }
}