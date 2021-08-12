// freemode.ysc @ L1138720
char* func_19573(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  if (iParam2 == 0)
  {
  }
  iVar0 = Global_2555716[iParam0 /*3*/][func_589(iParam1)];
  return STATS::STAT_GET_LICENSE_PLATE(iVar0);
}