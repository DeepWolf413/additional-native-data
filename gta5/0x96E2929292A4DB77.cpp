// abigail1.ysc @ L4193
int func_59(int iParam0, int iParam1, int iParam2, int iParam3)
{
  int iVar0;
  int iVar1;
  
  if (iParam2 == 12)
  {
  }
  else if (iParam2 == 13)
  {
  }
  else if (iParam2 == 14)
  {
    FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 8, -1, true, -1, -1);
    iVar0 = FILES::_0x6CEBE002E58DEE97(iParam1);
    if (iVar0 != -1)
    {
      return (func_56(iParam0) + iVar0);
    }
  }
  else
  {
    FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 8, -1, false, -1, func_76(iParam2));
    iVar1 = FILES::_0x96E2929292A4DB77(iParam1);
    if (iVar1 != -1)
    {
      return (func_55(iParam0, func_76(iParam2)) + iVar1);
    }
  }
  return -99;
}