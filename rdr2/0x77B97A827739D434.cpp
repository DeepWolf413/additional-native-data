// main.ysc @ L28302
bool func_723(int iParam0)
{
  int iVar0;
  int iVar1;

  if (!func_1185(iParam0, &iVar0, &iVar1))
  {
    return false;
  }
  return STATS::CHAL_ACHIEVEMENT_IS_COMPLETE(iVar0, iVar1);
}