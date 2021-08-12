// freemode.ysc @ L970262
int func_15159(int iParam0, int iParam1, bool bParam2)
{
  if (Global_2097152[func_763() /*5557*/].f_675.f_4237[iParam0 /*3*/].f_1 != bParam2)
  {
    Global_2097152[func_763() /*5557*/].f_675.f_4237[iParam0 /*3*/].f_1 = bParam2;
    func_1908(func_15168(iParam0), bParam2, -1, 1);
    if (bParam2)
    {
      MISC::SET_BIT(&Global_2520126, (8 + iParam0));
      func_797(2112, -1);
      func_13094(67, -1);
      func_797(2583, -1);
      func_13094(69, -1);
      STATS::PLAYSTATS_ACTIVITY_DONE(1000, iParam1);
      func_15160();
    }
    return 1;
  }
  return 0;
}