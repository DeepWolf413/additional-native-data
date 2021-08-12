// freemode.ysc @ L938984
void func_14129(bool bParam0, bool bParam1, int iParam2)
{
  if ((func_519(bParam0) || func_520(bParam0)) || Global_2554029.f_3.f_176)
  {
    HUD::SET_MP_GAMER_TAG_COLOUR(bParam1, iParam2, 118);
  }
  else
  {
    HUD::SET_MP_GAMER_TAG_COLOUR(bParam1, iParam2, func_1711(bParam0, PLAYER::GET_PLAYER_TEAM(bParam0), 0, 0, 0));
  }
}