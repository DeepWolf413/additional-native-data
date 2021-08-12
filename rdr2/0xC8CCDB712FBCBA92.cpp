// ambush_bnd_cliff1.ysc @ L5280
bool func_225(int iParam0, float fParam1, float fParam2)
{
  float fVar0;

  fVar0 = func_368(iParam0, Global_35, 1, 1);
  if (fParam2 > 0f)
  {
    if (fVar0 < fParam2)
    {
      return true;
    }
  }
  if (fVar0 < fParam1)
  {
    if (ENTITY::_0xC8CCDB712FBCBA92(iParam0))
    {
      return true;
    }
    if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
    {
      if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
      {
        return true;
      }
    }
  }
  return false;
}