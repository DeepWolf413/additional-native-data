// fmmc_launcher.ysc @ L428435
void func_7108(int iParam0, char* sParam1, int iParam2)
{
  int iVar0;
  
  if (func_226())
  {
    iVar0 = Global_1390229[iParam0 /*3*/][func_65(iParam2)];
    if (iVar0 != 0)
    {
      STATS::STAT_SET_USER_ID(iVar0, sParam1, true);
    }
  }
}