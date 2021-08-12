// am_mp_casino_nightclub.ysc @ L376402
void func_5435(var uParam0, bool bParam1)
{
  struct<3> Var0;
  struct<3> Var3;
  struct<3> Var6;
  struct<3> Var9;
  int iVar12;
  
  if (uParam0->f_659 != 0)
  {
    return;
  }
  Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam1), true) };
  Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::GET_PLAYER_PED(bParam1)) };
  Var6 = { Var0 + Var3 * Vector(0.5f, 0.5f, 0.5f) + Vector(0.15f, 0f, 0f) };
  Var9 = { Var0 + Var3 * Vector(1f, 1f, 1f) + Vector(0.15f, 0f, 0f) };
  iVar12 = 467;
  uParam0->f_659 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var6, Var9, 0.5f, iVar12, PLAYER::GET_PLAYER_PED(bParam1), 4);
}