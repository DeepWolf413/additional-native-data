// beat_campfire_ambush.ysc @ L998
void func_26(int iParam0, bool bParam1)
{
  int iVar0;

  if (!func_113(iParam0, 0))
  {
    return;
  }
  iVar0 = func_114(iParam0);
  if (bParam1)
  {
    PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, iVar0);
  }
  else
  {
    PLAYER::_0xCDDD4B74660E2335(PLAYER::PLAYER_ID(), 0, iVar0);
  }
}