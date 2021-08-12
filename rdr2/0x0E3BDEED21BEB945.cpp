// flow_controller.ysc @ L3786
int func_175(int iParam0)
{
  bool bVar0;

  bVar0 = iParam0 > 0;
  if (Global_40.f_11957 == 0 && LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) == 0)
  {
    return -2;
  }
  LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
  if (Global_40.f_11957 > 0)
  {
    LAW::_0x0E3BDEED21BEB945(PLAYER::PLAYER_ID(), Global_40.f_11957);
    if (bVar0)
    {
      Global_40.f_11957 = 0;
    }
  }
  return -2;
}