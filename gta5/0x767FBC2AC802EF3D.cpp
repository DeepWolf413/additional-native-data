// abigail1.ysc @ L4744
int func_71(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  var uVar1;
  
  if (iParam0 != 12074)
  {
    if (iParam2 == 0)
    {
    }
    iVar0 = Global_2555716[iParam0 /*3*/][func_70(iParam1)];
    if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
    {
      return uVar1;
    }
  }
  return 0;
}