// short_update.ysc @ L53057
void func_1734()
{
  float fVar0;

  if (!Global_1347477.f_126 && PLAYER::_0xE92261BD28C0878F(PLAYER::GET_PLAYER_INDEX()) <= 0f)
  {
    if (func_739(joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), 1, 0))
    {
      fVar0 = (fVar0 + 0.1f);
    }
    if (func_739(joaat("PROVISION_TRINKET_PANTHER_EYE"), 1, 0))
    {
      fVar0 = (fVar0 + 0.1f);
    }
    if (fVar0 > 0f)
    {
      PLAYER::_0xC0B1C05B313693D1(PLAYER::GET_PLAYER_INDEX(), (1f - fVar0));
      func_2983(1, 3000);
      Global_1347477.f_126 = 1;
    }
  }
  if (PLAYER::_0xE92261BD28C0878F(PLAYER::GET_PLAYER_INDEX()) != 0f && func_2984(&Global_35))
  {
    PLAYER::_0x870634493CB4372C(PLAYER::GET_PLAYER_INDEX(), 0f);
  }
  if (Global_1347477.f_126 && (MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED() - Global_1911859[1 /*3*/]) >= Global_1911859[1 /*3*/].f_1)
  {
    PLAYER::_0xC0B1C05B313693D1(PLAYER::GET_PLAYER_INDEX(), 0f);
    Global_1911859[1 /*3*/].f_2 = 0;
  }
}