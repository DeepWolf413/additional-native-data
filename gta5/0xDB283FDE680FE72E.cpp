// freemode.ysc @ L460799
void func_7378(int iParam0, struct<3> Param1, int iParam4)
{
  int iVar0;
  
  iVar0 = Global_2594286[iParam0 /*3*/][func_589(iParam4)];
  STATS::STAT_SET_POS(iVar0, Param1.x, Param1.f_1, Param1.f_2, true);
}