// beat_disabled_beggar.ysc @ L5982
bool func_167(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_UNARMED"), 0))
    {
      return true;
    }
    if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44) && WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_44))
    {
      if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, Global_1935630.f_44, 0))
      {
        return true;
      }
    }
  }
  return false;
}