// act_cinema.ysc @ L11119
int func_176(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (iParam1 == -1)
  {
    iParam1 = func_134();
  }
  iVar0 = 0;
  iVar1 = func_178(iParam0, iParam1);
  iVar2 = func_177(iParam0);
  if (0 != iVar1)
  {
    if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
    {
      iVar0 = 0;
    }
  }
  return iVar0;
}