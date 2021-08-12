// am_challenges.ysc @ L21943
int func_619(int iParam0)
{
  int iVar0;
  
  if (!func_12(iParam0, 0, 1))
  {
    return -1;
  }
  if (Global_1391712 == 0)
  {
    return -1;
  }
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < Global_1391712)
  {
    if (Global_1391551[iVar0 /*5*/].f_1 == iParam0)
    {
      if (PED::IS_PEDHEADSHOT_VALID(Global_1391551[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1391551[iVar0 /*5*/].f_2))
      {
        return iVar0;
      }
      func_620(iVar0);
      return -1;
    }
    iVar0++;
  }
  return -1;
}