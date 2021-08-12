// act_bankrobbery01.ysc @ L35529
bool func_1009(int iParam0, int iParam1)
{
  if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
  {
    return true;
  }
  if (func_732(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
  {
    return false;
  }
  if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
  {
    if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
    {
      return true;
    }
  }
  return false;
}