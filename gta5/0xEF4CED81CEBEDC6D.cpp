// act_cinema.ysc @ L10910
int func_172(int iParam0, int iParam1)
{
  int iVar0;
  var uVar1;
  
  iVar0 = Global_2555716[iParam0 /*3*/][func_133(iParam1)];
  if (HUD::GET_MENU_PED_INT_STAT(iVar0, &uVar1))
  {
    return uVar1;
  }
  return 0;
}