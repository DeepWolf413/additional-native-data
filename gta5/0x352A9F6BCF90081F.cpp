// josh3.ysc @ L36848
int func_294(struct<3> Param0, float fParam3)
{
  struct<3> Var0;
  
  if (FIRE::GET_CLOSEST_FIRE_POS(&Var0, Param0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param0, true) < fParam3)
  {
    return 1;
  }
  return 0;
}