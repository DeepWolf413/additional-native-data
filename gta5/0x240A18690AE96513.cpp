// agency_prep2amb.ysc @ L9784
int func_191(struct<3> Param0)
{
  struct<3> Var0;
  float fVar3;
  
  if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 3f, 0f))
  {
    fVar3 = SYSTEM::VDIST2(Param0, Var0);
    if (fVar3 >= 400f || !func_192(Param0, Var0))
    {
      return 0;
    }
    else if (fVar3 < 20f && fVar3 > 6f)
    {
      if (func_13())
      {
        func_69(40);
      }
      return 1;
    }
    else
    {
      if (func_13())
      {
        func_69(41);
      }
      return 1;
    }
  }
  return 0;
}