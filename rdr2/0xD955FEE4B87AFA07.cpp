// abigail2_1.ysc @ L43996
int func_1071(int iParam0)
{
  int iVar0;

  iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
  if (WEAPON::_0x705BE297EEBDB95D(iVar0))
  {
    if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
    {
      if (!func_593(50))
      {
        if (!func_593(48))
        {
          return 133;
        }
        return 135;
      }
    }
    else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
    {
      if (!func_593(51))
      {
        if (!func_593(49))
        {
          return 134;
        }
        return 136;
      }
    }
  }
  return 137;
}