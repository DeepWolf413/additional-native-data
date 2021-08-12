// generic_weapon_item.ysc @ L506
int func_16(int iParam0, int iParam1)
{
  char cVar0[64];

  StringCopy(&cVar0, WEAPON::_GET_WEAPON_NAME(iParam0), 64);
  if (WEAPON::_0xD56E5F336C675EFA(iParam1) > 0f)
  {
    StringCopy(&cVar0, WEAPON::_0x7A56D66C78D8EF8E(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam1)), 64);
  }
  return MISC::GET_HASH_KEY(&cVar0);
}