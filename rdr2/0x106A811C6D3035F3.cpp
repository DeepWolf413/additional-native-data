// abigail2_1.ysc @ L29570
bool func_601(int iParam0, int iParam1, int iParam2)
{
  if (iParam1 < 1)
  {
    return true;
  }
  if (!func_603(iParam0))
  {
    return false;
  }
  if (!func_599(0))
  {
    return false;
  }
  WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
  return true;
}