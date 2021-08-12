// main.ysc @ L28326
void func_725(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if (!func_1185(iParam0, &iVar0, &iVar1))
  {
    return;
  }
  STATS::CHAL_SET_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
}