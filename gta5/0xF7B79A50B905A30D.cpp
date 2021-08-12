// am_taxi.ysc @ L10248
int func_214(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
  if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Param0, Param0.f_1, Param3, Param3.f_1))
  {
    return 1;
  }
  return 0;
}