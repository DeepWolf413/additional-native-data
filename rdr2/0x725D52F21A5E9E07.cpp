// short_update.ysc @ L58380
void func_1905(int iParam0)
{
  int iVar0;
  struct<2> Var1;

  iVar0 = func_1906(iParam0);
  Var1 = { func_3101(iVar0) };
  STATS::_STAT_ID_INCREMENT_INT(&Var1, 1);
  if (func_3102(iVar0, 0))
  {
    COMPENDIUM::COMPENDIUM_GANG_MEMBER_KILLED(func_3103(iVar0));
  }
}