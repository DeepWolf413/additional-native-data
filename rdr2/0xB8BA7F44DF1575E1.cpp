// coachrobberies_gang1.ysc @ L20093
bool func_524(int iParam0)
{
  struct<6> Var0;

  SCRIPTS::REQUEST_SCRIPT("coachrobberies");
  if (SCRIPTS::HAS_SCRIPT_LOADED("coachrobberies"))
  {
    Var0.f_3 = iParam0;
    Var0.f_4 = Global_1392388.f_10[iParam0 /*13*/].f_10;
    Var0.f_5 = Global_1392388.f_10[iParam0 /*13*/].f_11;
    Var0.f_2 = Global_40.f_9146.f_64[iParam0];
    Var0 = Global_40.f_9146.f_19[iParam0];
    Var0.f_1 = Global_40.f_9146.f_34[iParam0];
    Global_1392388.f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("coachrobberies", &Var0, 6, 7300);
    SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies");
    return true;
  }
  return false;
}