// act_cinema.ysc @ L11506
float func_182(int iParam0, int iParam1)
{
  int iVar0;
  var uVar1;
  
  iVar0 = Global_2591939[iParam0 /*3*/][func_133(iParam1)];
  if (HUD::GET_MENU_PED_FLOAT_STAT(iVar0, &uVar1))
  {
    return uVar1;
  }
  return 0f;
}