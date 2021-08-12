// am_darts.ysc @ L103114
void func_614(var uParam0)
{
  struct<3> Var0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.08f;
  uParam0->f_8.f_1 = -0.213f;
  Var0 = { Local_295 - uParam0->f_8 };
  fVar3 = SYSTEM::VMAG(Var0);
  uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
  fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
  uParam0->f_17.f_2 = (fVar4 - 180f);
  fVar5 = (MISC::TAN(uParam0->f_17.f_2) * fVar6);
  uParam0->f_11 = { uParam0->f_8 };
  uParam0->f_11 = (uParam0->f_11 + fVar5);
  Var0 = { Local_295 - uParam0->f_11 };
  fVar3 = SYSTEM::VMAG(Var0);
  uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
}