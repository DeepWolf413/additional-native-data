// ambush_bnd_cliff1.ysc @ L7551
void func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
  struct<23> Var0;
  float fVar25;

  Var0.f_4 = -1;
  Var0.f_8 = 2;
  Var0.f_9 = 1;
  Var0.f_10 = 1;
  Var0.f_11 = 1;
  Var0.f_13 = 1;
  Var0.f_14 = 2;
  Var0.f_15 = 2;
  Var0.f_16 = 3;
  Var0.f_19 = 3;
  Var0.f_20 = 1;
  Var0.f_21 = 3;
  Var0.f_22 = 3;
  fVar25 = BUILTIN::TO_FLOAT((iParam4 / 1000));
  if (bParam5)
  {
    TASK::_0xE7FA07624574B79A(iParam0, iParam1, iParam2, iParam3, fVar25, 1, 0, 0, 0);
  }
  TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam4, 0, 51, 0);
  func_401(&Var0, iParam1, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
  _NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}