// abigail2_1.ysc @ L64659
void func_1762(int iParam0, int iParam1)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
    WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
    if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
    {
      if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
      {
        PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
      }
    }
  }
}