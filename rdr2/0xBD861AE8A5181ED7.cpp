// abigail2_1.ysc @ L60018
void func_1613(int iParam0)
{
  struct<2> Var0;

  if (iParam0 <= 0)
  {
    return;
  }
  if (func_1629(1) < iParam0)
  {
    iParam0 = func_1629(1);
  }
  MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
  Var0 = { func_94(joaat("CAREER_CASH")) };
  STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}