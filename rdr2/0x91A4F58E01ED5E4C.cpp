// bjack_sp.ysc @ L35956
void func_1218(int iParam0)
{
  struct<2> Var0;
  struct<2> Var2;
  struct<2> Var4;
  int iVar6;
  var uVar7;
  var uVar8;
  var uVar9;

  Var0 = { func_1212(joaat("WINS"), iParam0) };
  Var2 = { func_1212(joaat("WIN_STREAK"), iParam0) };
  Var4 = { func_1212(joaat("BEST_WIN_STREAK"), iParam0) };
  STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
  STATS::_STAT_ID_INCREMENT_INT(&Var2, 1);
  iVar6 = 0;
  if (STATS::STAT_ID_GET_INT(&Var2, &iVar6))
  {
    STATS::_0x91A4F58E01ED5E4C(&Var4, iVar6);
  }
  STATS::STAT_ID_GET_INT(&Var0, &uVar7);
  STATS::STAT_ID_GET_INT(&Var2, &uVar8);
  STATS::STAT_ID_GET_INT(&Var4, &uVar9);
}