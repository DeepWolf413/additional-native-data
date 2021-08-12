// aberdeenpigfarm.ysc @ L5537
void func_259(int iParam0)
{
  struct<2> Var0;

  if (iParam0 < 0)
  {
    iParam0 = 0;
  }
  Global_40.f_4283.f_325 = iParam0;
  Var0 = { func_233(joaat("GANG_SAVINGS_CASH")) };
  STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}