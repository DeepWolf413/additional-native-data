// am_hunt_the_beast.ysc @ L67559
void func_268(int iParam0, float fParam1, int iParam2, bool bParam3)
{
  int iVar0;
  
  if (func_267())
  {
    iVar0 = Global_2591939[iParam0 /*3*/][func_72(iParam2)];
    if (iVar0 != 0)
    {
      STATS::STAT_SET_FLOAT(iVar0, fParam1, bParam3);
    }
  }
}