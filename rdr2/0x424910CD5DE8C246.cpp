// ambush_odr_bridge_prevent.ysc @ L5783
bool func_205(int iParam0, float fParam1, float fParam2)
{
  float fVar0;

  fVar0 = func_198(iParam0, Global_36, 1);
  if (fParam2 > 0f)
  {
    if (fVar0 < fParam2)
    {
      return true;
    }
  }
  if (fVar0 < fParam1)
  {
    if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0))
    {
      return true;
    }
  }
  return false;
}