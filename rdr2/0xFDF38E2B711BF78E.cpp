// cv_cc_am_cln_shared.ysc @ L11293
bool func_390(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
  struct<15> Var0;

  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    Var0.f_14 = iParam0;
    Var0 = uParam1;
    Var0.f_12 = iParam2;
    Var0.f_4 = iParam4;
    Var0.f_7 = iParam3;
    Var0.f_9 = iParam5;
    Var0.f_10 = iParam6;
    return MISC::_0xFDF38E2B711BF78E(&Var0, 17);
  }
  return false;
}