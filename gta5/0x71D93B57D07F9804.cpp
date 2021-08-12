// act_cinema.ysc @ L4159
float func_108(int iParam0, float fParam1)
{
  struct<3> Var0;
  struct<3> Var3;
  struct<3> Var6;
  float fVar9;
  
  if (iParam0 == 0)
  {
    return 5f;
  }
  func_88(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
  Var6 = { Var3 - Var0 };
  fVar9 = (SYSTEM::SQRT(((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
  return fVar9;
}