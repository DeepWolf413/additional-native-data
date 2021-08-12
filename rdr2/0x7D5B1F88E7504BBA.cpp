// aberdeenpigfarm.ysc @ L2895
bool func_121(int iParam0, int iParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7)
{
  int iVar0;

  if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
  {
    if (bParam7)
    {
      if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(*iParam0))
      {
        return false;
      }
    }
    return true;
  }
  if (*uParam2 == 0)
  {
    *uParam2 = ENTITY::_0x6F3068258A499E52(iParam1, vParam3, iParam6 | 2 | 1);
    return false;
  }
  if (!ENTITY::_0x1FF441D7954F8709(*uParam2))
  {
    return false;
  }
  iVar0 = ENTITY::_0x4735E2A4BB83D9DA(*uParam2);
  *iParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
  return false;
}