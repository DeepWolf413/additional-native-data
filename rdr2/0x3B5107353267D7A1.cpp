// short_update.ysc @ L58368
void func_1904(int iParam0)
{
  int iVar0;
  struct<2> Var1;

  iVar0 = func_3099(ENTITY::GET_ENTITY_MODEL(iParam0));
  Var1 = { func_3100(iVar0) };
  if (STATS::STAT_ID_SET_BOOL(&Var1, true, true))
  {
  }
}