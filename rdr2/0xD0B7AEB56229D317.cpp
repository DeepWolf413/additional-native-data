// ambush_exc_road_robbery.ysc @ L5335
bool func_182(int iParam0)
{
  if (!func_227(iParam0, 3))
  {
    return true;
  }
  if (PED::IS_PED_IN_COMBAT(iParam0, 0))
  {
    return true;
  }
  if (PED::_GET_LASSO_TARGET(Global_35) == iParam0)
  {
    return true;
  }
  if (PED::_0xD0B7AEB56229D317(iParam0) == Global_35)
  {
    return true;
  }
  if (PED::_0xD0B7AEB56229D317(Global_35) == iParam0)
  {
    return true;
  }
  return false;
}