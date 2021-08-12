// act_bankrobbery01.ysc @ L63475
bool func_2057(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
  if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
    {
      return true;
    }
    else if (!bParam2)
    {
      if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
      {
        if (WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
        {
          if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630.f_44, iParam1))
          {
            return true;
          }
        }
      }
    }
  }
  return false;
}