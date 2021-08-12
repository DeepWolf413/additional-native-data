// abigail2_1.ysc @ L63186
bool func_1687(int iParam0, int iParam1)
{
  int iVar0;

  iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
  if (iVar0 == 1 || iVar0 == 0)
  {
    return true;
  }
  return false;
}