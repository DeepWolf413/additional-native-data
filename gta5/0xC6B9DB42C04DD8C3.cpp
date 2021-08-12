// act_cinema.ysc @ L34186
int func_268(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  int iVar4;
  
  if (iParam0 != -1)
  {
    iVar0 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iParam0);
    iVar1 = 0;
    while (iVar1 < iVar0)
    {
      FILES::GET_FORCED_COMPONENT(iParam0, iVar1, &iVar2, &uVar3, &iVar4);
      if (iVar4 == iParam1 && (iParam2 == -1 || iParam2 == iVar2))
      {
        return 1;
      }
      iVar1++;
    }
  }
  return 0;
}