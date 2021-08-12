// blimptest.ysc @ L255
void func_8(struct<3> Param0)
{
  int iVar0;
  int iVar1;
  struct<3> Var2[12];
  
  iVar1 = 12;
  Var2[0 /*3*/] = { 5f, 0f, 0f };
  Var2[1 /*3*/] = { 0f, 5f, 0f };
  Var2[2 /*3*/] = { 0f, 0f, 5f };
  Var2[3 /*3*/] = { 5f, 5f, 0f };
  Var2[4 /*3*/] = { 5f, 0f, 5f };
  Var2[5 /*3*/] = { 0f, 5f, 5f };
  Var2[6 /*3*/] = { 20f, 0f, 0f };
  Var2[7 /*3*/] = { 0f, 20f, 0f };
  Var2[8 /*3*/] = { 0f, 0f, 20f };
  Var2[9 /*3*/] = { 20f, 20f, 0f };
  Var2[10 /*3*/] = { 20f, 0f, 20f };
  Var2[11 /*3*/] = { 0f, 20f, 20f };
  FIRE::ADD_EXPLOSION(Param0, 8, 1f, true, false, 1f, false);
  iVar0 = 0;
  while (iVar0 <= (iVar1 - 1))
  {
    FIRE::ADD_EXPLOSION(Param0 + Var2[iVar0 /*3*/], 8, 1f, true, false, 1f, false);
    iVar0++;
  }
}