// act_cinema.ysc @ L90122
void func_580(struct<3> Param0, float fParam3, int iParam4, bool bParam5)
{
  struct<2> Var0;
  struct<2> Var3;
  float fVar6;
  struct<3> Var7;
  struct<3> Var10;
  
  if (!iParam4 == 0)
  {
    func_88(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
    fVar6 = (Var3.f_1 - Var0.f_1);
    if (bParam5)
    {
      fVar6 = (fVar6 * -1f);
    }
    fVar6 = (fVar6 * 0.5f);
    Var7 = { 0f, fVar6, 0f };
    Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var7) };
    func_593(Var10, fParam3);
  }
  else
  {
    func_593(Param0, fParam3);
  }
}