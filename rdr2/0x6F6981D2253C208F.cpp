// guama3.ysc @ L57804
int func_1251(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
  if (func_1749(1, 0, 1) || iParam3)
  {
    PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
    func_1660(1);
    UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
    if (bParam2)
    {
      func_47(0, 0);
    }
    HUD::_HIDE_HUD_COMPONENT(724769646);
    HUD::_HIDE_HUD_COMPONENT(-1679307491);
    if (bParam0)
    {
      PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4, false);
    }
    else
    {
      PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
    }
    if (bParam1)
    {
      WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
    }
    else
    {
      WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
    }
    return 1;
  }
  return 0;
}