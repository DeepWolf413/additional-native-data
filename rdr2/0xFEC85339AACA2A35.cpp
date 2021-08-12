// long_update.ysc @ L24994
void func_742(int iParam0, bool bParam1)
{
  if (func_1507(iParam0))
  {
    if (!func_1508(iParam0) && !bParam1)
    {
      func_1509(iParam0, 1);
      LAW::_0xF19706B1F8FFA88F(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) + 8);
    }
    if (Global_1934266.f_69 != 0.75f && !bParam1)
    {
      Global_1934266.f_69 = 0.75f;
      LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266.f_69);
    }
  }
  else if (Global_1934266.f_69 != 1f)
  {
    Global_1934266.f_69 = 1f;
    LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266.f_69);
  }
}