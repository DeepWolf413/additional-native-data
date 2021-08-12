// act_cinema.ysc @ L1721
void func_35(var uParam0, struct<3> Param1)
{
  float fVar0;
  float fVar1;
  struct<3> Var2;
  
  fVar0 = SYSTEM::COS(Param1.x);
  fVar1 = SYSTEM::SIN(Param1.x);
  Var2.x = *uParam0;
  Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
  Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
  *uParam0 = { Var2 };
  fVar0 = SYSTEM::COS(Param1.f_1);
  fVar1 = SYSTEM::SIN(Param1.f_1);
  Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
  Var2.f_1 = uParam0->f_1;
  Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
  *uParam0 = { Var2 };
  fVar0 = SYSTEM::COS(Param1.f_2);
  fVar1 = SYSTEM::SIN(Param1.f_2);
  Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
  Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
  Var2.f_2 = uParam0->f_2;
  *uParam0 = { Var2 };
}