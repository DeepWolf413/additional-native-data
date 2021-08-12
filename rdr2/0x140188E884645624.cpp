// act_bankrobbery01.ysc @ L63265
bool func_2049(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
  if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return true;
  }
  if (!bParam3)
  {
    if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
    {
      return true;
    }
  }
  if (func_1081(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, 1, fParam5))
  {
    return true;
  }
  return false;
}