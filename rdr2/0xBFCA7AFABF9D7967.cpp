// marston6.ysc @ L53089
bool func_1306()
{
  int iVar0;

  iVar0 = 7;
  while (iVar0 <= 10)
  {
    if (!WEAPON::_0xBFCA7AFABF9D7967(iLocal_535[iVar0], 0))
    {
      WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_535[iVar0], joaat("WEAPON_PISTOL_MAUSER"), -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
      return false;
    }
    iVar0++;
  }
  if (((WEAPON::_0xBFCA7AFABF9D7967(iLocal_535[7], 0) && WEAPON::_0xBFCA7AFABF9D7967(iLocal_535[8], 0)) && WEAPON::_0xBFCA7AFABF9D7967(iLocal_535[9], 0)) && WEAPON::_0xBFCA7AFABF9D7967(iLocal_535[10], 0))
  {
    return true;
  }
  else
  {
    return false;
  }
  return false;
}