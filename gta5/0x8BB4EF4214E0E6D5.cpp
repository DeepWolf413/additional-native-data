// family4.ysc @ L116575
float func_819(int iParam0, int iParam1)
{
  struct<2> Var0;
  struct<3> Var3;
  struct<3> Var6;
  struct<3> Var9;
  float fVar12;
  int iVar13;
  
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    Var0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
    Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
  }
  if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
  {
    Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
    if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
    {
      iVar13 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
      Var9.x = ENTITY::GET_ENTITY_FORWARD_X(iVar13);
      Var9.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iVar13);
    }
    else
    {
      Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
      Var9 = { Var6 - Var3 };
    }
  }
  fVar12 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0, Var0.f_1, Var9.x, Var9.f_1);
  return fVar12;
}