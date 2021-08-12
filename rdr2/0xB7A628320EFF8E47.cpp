// abigail21_outro.ysc @ L1300
bool func_67(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  if (bParam6)
  {
    if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
    {
      return true;
    }
  }
  else if (func_89(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
  {
    return true;
  }
  return false;
}