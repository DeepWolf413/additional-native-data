// act_cinema.ysc @ L95549
int func_697(int iParam0)
{
  struct<3> Var0;
  var uVar3;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
    if (WATER::TEST_PROBE_AGAINST_WATER(Var0, Var0.x, Var0.f_1, -1f, &uVar3))
    {
      return 1;
    }
  }
  return 0;
}