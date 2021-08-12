// act_cinema.ysc @ L69431
void func_373(int iParam0, char* sParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = Global_2555716[iParam0 /*3*/][func_133(iParam2)];
  if (iVar0 != 0)
  {
    STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
  }
}