// act_cinema.ysc @ L3502
int func_76(struct<3> Param0, int iParam3, float fParam4)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  
  if (func_72(iParam3))
  {
    func_77(iParam3, &Var0, &Var3, &fVar6, fParam4);
    return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true);
  }
  return 0;
}