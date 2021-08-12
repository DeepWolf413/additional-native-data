// fmmc_launcher.ysc @ L428049
void func_7100(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
  int iVar0;
  
  if (func_226())
  {
    iVar0 = Global_2593984[iParam0 /*3*/][func_65(iParam2)];
    if (iVar0 != 0)
    {
      STATS::STAT_SET_STRING(iVar0, sParam1, bParam3);
    }
  }
}