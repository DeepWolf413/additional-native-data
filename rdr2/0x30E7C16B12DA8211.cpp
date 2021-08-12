// homeinvasion.ysc @ L84844
bool func_2710()
{
  int iVar0;
  int iVar1;

  iVar0 = func_1281(Global_35, 1, 0, 0);
  iVar1 = func_1281(Global_35, 1, 1, 0);
  if ((((iVar0 == joaat("WEAPON_UNARMED") || WEAPON::_IS_WEAPON_ONE_HANDED(iVar0)) || WEAPON::_IS_WEAPON_LANTERN(iVar0)) || WEAPON::_IS_WEAPON_KNIFE(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0))
  {
    if (iVar1 == joaat("WEAPON_UNARMED") || WEAPON::_IS_WEAPON_ONE_HANDED(iVar1))
    {
      return true;
    }
  }
  return false;
}