// achievement_controller.ysc @ L401
int func_4(int iParam0, int iParam1)
{
  int iVar0;
  var uVar1;
  
  iVar0 = Global_2592627[iParam0 /*3*/][func_5(iParam1)];
  if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
  {
    return uVar1;
  }
  return 0;
}