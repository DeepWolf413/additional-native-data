// maintransition.ysc @ L293027
void func_3935(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = func_3932(iParam0);
  iVar1 = 0;
  while (iVar1 < 317)
  {
    if (iVar0 == Global_2465852[iVar1 /*142*/].f_66)
    {
      if (!MISC::IS_BIT_SET(Global_2465852[iVar1 /*142*/].f_103, true) || (MISC::IS_BIT_SET(Global_2465852[iVar1 /*142*/].f_103, true) && MISC::IS_BIT_SET(Global_2465852[iVar1 /*142*/].f_103, 2)))
      {
        STATS::STAT_SET_CURRENT_POSIX_TIME(func_3936(iParam1), true);
        func_2798(iVar1, iParam1);
        STATS::PLAYSTATS_QUICKFIX_TOOL(4, func_3926(iParam0));
        func_3894(4, "QFE_VEHICLE_RM", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0), iParam1, 0);
        func_1043(1);
        iVar1 = 317;
      }
      else if (iParam1 == func_4343())
      {
      }
    }
    iVar1++;
  }
}