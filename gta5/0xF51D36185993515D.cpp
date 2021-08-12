// country_race.ysc @ L19428
void func_312(int iParam0, struct<3> Param1)
{
  int iVar0;
  struct<3> Var1[8];
  float fVar26;
  struct<3> Var27;
  
  iVar0 = 0;
  while (iVar0 <= 7)
  {
    Var1[iVar0 /*3*/] = { Param1 + func_315(iVar0) };
    MISC::GET_GROUND_Z_FOR_3D_COORD(Var1[iVar0 /*3*/], &fVar26, false, false);
    if (fVar26 < (Param1.f_2 - 2f) || fVar26 > (Param1.f_2 + 2f))
    {
      Var1[iVar0 /*3*/].f_2 = Param1.f_2;
    }
    else
    {
      Var1[iVar0 /*3*/].f_2 = fVar26;
    }
    iVar0++;
  }
  Var27 = { func_313(&Var1) };
  GRAPHICS::_0xF51D36185993515D(iParam0, Param1 - Vector(0.3f, 0f, 0f), Var27);
}