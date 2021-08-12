// chinese1.ysc @ L111791
int func_730(bool bParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenadelauncher"), false))
  {
    return 0;
  }
  WEAPON::GET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenadelauncher"), &iVar0);
  iVar2 = (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenadelauncher")) + iVar0);
  if (bParam0)
  {
    iVar1 = OBJECT::_0xDB41D07A45A6D4B7(joaat("pickup_weapon_grenadelauncher"));
    iVar2 = (iVar2 - iVar1);
  }
  if (iVar2 < 5)
  {
    return 1;
  }
  return 0;
}