// director_mode.ysc @ L142121
float func_1066(struct<3> Param0, bool bParam3)
{
  float fVar0;
  bool bVar1;
  
  bVar1 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Param0 + Vector(2f, 0f, 0f), 511, &fVar0);
  if (bVar1 == 2)
  {
    return fVar0;
  }
  if (bVar1 == 1)
  {
    if (bParam3)
    {
      return fVar0;
    }
    else
    {
      if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Param0 + Vector(2f, 0f, 0f), &fVar0, false, false))
      {
        fVar0 = -200f;
      }
      return fVar0;
    }
  }
  return -200f;
}