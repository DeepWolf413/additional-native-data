// abigail2.ysc @ L37533
bool func_308(int iParam0, int iParam1, int iParam2)
{
  bool bVar0;
  int iVar1;
  int iVar2;
  
  bVar0 = false;
  if (iParam1 == -1)
  {
    iParam1 = func_19();
  }
  iVar1 = func_310(iParam0, iParam1);
  iVar2 = func_309(iParam0);
  if (0 != iVar1)
  {
    bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
  }
  return bVar0;
}