// bjack_sp.ysc @ L35995
void func_1221(int iParam0)
{
  struct<2> Var0;
  struct<2> Var2;
  var uVar4;
  var uVar5;

  Var0 = { func_1212(joaat("LOSSES"), iParam0) };
  Var2 = { func_1212(joaat("WIN_STREAK"), iParam0) };
  STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
  STATS::_0x0FEE2561120F3333(&Var2);
  STATS::STAT_ID_GET_INT(&Var0, &uVar4);
  STATS::STAT_ID_GET_INT(&Var2, &uVar5);
}