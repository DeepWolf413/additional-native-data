// act_cinema.ysc @ L34159
int func_267(int iParam0, int iParam1, int* iParam2, int iParam3)
{
  int iVar0;
  int iVar1;
  var uVar2;
  int iVar3;
  
  iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iParam0);
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    FILES::GET_VARIANT_COMPONENT(iParam0, iVar1, iParam2, &uVar2, &iVar3);
    if (iVar3 == iParam1)
    {
      if (*iParam2 != 0 && *iParam2 != joaat("0"))
      {
        if (iParam3 == -1 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam2, iParam3, iVar3))
        {
          return 1;
        }
      }
    }
    iVar1++;
  }
  return 0;
}