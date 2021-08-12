// bounty1.ysc @ L50191
bool func_1267(int iParam0, int iParam1)
{
  if (func_424(iParam0, 0))
  {
    if (ENTITY::_GET_ENTITY_CARRY_CONFIG(iParam0) == iParam1)
    {
      return true;
    }
  }
  return false;
}