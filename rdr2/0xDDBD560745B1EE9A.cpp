// aberdeenpigfarm.ysc @ L4478
int func_189(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if (!func_234(iParam0))
  {
    return 0;
  }
  if (!func_199())
  {
    return 0;
  }
  if (!func_235(iParam0, &iVar0, &iVar1))
  {
    return 0;
  }
  if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
  {
    return 0;
  }
  STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
  return 1;
}