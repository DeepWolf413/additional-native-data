// flow_controller.ysc @ L3771
int func_174(int iParam0)
{
  bool bVar0;
  int iVar1;

  bVar0 = iParam0 > 0;
  iVar1 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID());
  Global_40.f_11957 = iVar1;
  if (bVar0)
  {
    LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
  }
  return -2;
}