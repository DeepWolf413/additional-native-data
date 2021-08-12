// barry2.ysc @ L49977
void func_545(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
  int iVar0;
  float fVar1;
  struct<3> Var2;
  struct<3> Var5;
  float fVar8;
  
  fVar1 = (360f / SYSTEM::TO_FLOAT(iParam8));
  Var2 = { Param0 };
  Var5 = { Param0 };
  fVar8 = 0f;
  Var2 = { Param0 };
  Var2.x = (Var2.x + (SYSTEM::SIN((fVar8 - fVar1)) * fParam3));
  Var2.f_1 = (Var2.f_1 + (SYSTEM::COS((fVar8 - fVar1)) * fParam3));
  iVar0 = 0;
  while (iVar0 <= iParam8)
  {
    Var5 = { Param0 };
    Var5.x = (Var5.x + (SYSTEM::SIN(fVar8) * fParam3));
    Var5.f_1 = (Var5.f_1 + (SYSTEM::COS(fVar8) * fParam3));
    GRAPHICS::DRAW_DEBUG_LINE(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
    Var2 = { Var5 };
    fVar8 = (fVar8 + fVar1);
    iVar0++;
  }
}