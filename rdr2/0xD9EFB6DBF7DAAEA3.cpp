// rcm_bh_camp_return.ysc @ L35675
bool func_1167(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
  int iVar0;
  int iVar1;

  if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
  {
    *iParam4 = func_1180(iParam0, vParam1, iParam5, iParam6);
  }
  iVar1 = 1;
  iVar0 = 1;
  if (bParam7)
  {
    if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iParam8))
    {
      iVar1 = 0;
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
  {
    iVar0 = func_1689(iParam4, 1);
  }
  return (iVar1 && iVar0);
}