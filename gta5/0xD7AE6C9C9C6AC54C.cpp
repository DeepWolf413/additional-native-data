// act_cinema.ysc @ L11588
float func_184(int iParam0, int iParam1)
{
  int iVar0;
  var uVar1;
  
  iVar0 = Global_2591939[iParam0 /*3*/][func_133(iParam1)];
  if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
  {
    return uVar1;
  }
  return 0f;
}