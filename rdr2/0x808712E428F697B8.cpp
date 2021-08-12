// main.ysc @ L28314
int func_724(int iParam0)
{
  int iVar0;
  int iVar1;

  if (!func_1185(iParam0, &iVar0, &iVar1))
  {
    return -1;
  }
  return STATS::CHAL_ACHIEVEMENT_GET_PROGRESS_INT(iVar0, iVar1);
}