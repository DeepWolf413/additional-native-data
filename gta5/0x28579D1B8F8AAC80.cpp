// am_mp_smpl_interior_int.ysc @ L299583
int func_4917(struct<3> Param0, float fParam3, var uParam4)
{
  struct<3> Var0;
  int iVar3;
  
  Var0 = { Param0 + Vector(uParam4, 0f, 0f) };
  iVar3 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Var0, fParam3, 7, 0, 0);
  if (iVar3 != 0)
  {
  }
  return iVar3;
}