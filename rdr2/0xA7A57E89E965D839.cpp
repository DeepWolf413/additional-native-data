// generic_weapon_item.ysc @ L341
void func_10(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  WEAPON::_SET_WEAPON_DEGRADATION(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam0));
  WEAPON::_SET_WEAPON_DAMAGE(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam0), false);
  WEAPON::_SET_WEAPON_DIRT(iParam0, 0f, false);
  WEAPON::_SET_WEAPON_SOOT(iParam0, 0f, false);
  func_9(iParam0);
}