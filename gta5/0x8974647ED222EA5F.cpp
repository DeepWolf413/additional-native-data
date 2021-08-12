// fm_capture_creator.ysc @ L295759
int func_3397(struct<3> Param0, var uParam3)
{
  struct<3> Var0;
  var uVar3;
  float fVar6;
  
  Var0 = { Param0 + Vector(0.5f, 0f, 0f) };
  uParam3->f_792++;
  if (WATER::TEST_PROBE_AGAINST_ALL_WATER(Var0, Var0 - Vector(5.5f, 0f, 0f), 17, &uVar3) == 1)
  {
    return 1;
  }
  if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar6, false, false))
  {
    if ((Var0.f_2 - fVar6) > 1f)
    {
      return 1;
    }
  }
  return 0;
}