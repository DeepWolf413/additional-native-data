// taxi_clowncar.ysc @ L8345
bool func_283(int iParam0)
{
  struct<3> Var0;
  struct<3> Var3;
  struct<3> Var6;
  struct<3> Var9;
  struct<3> Var12;
  struct<3> Var15;
  struct<3> Var18;
  struct<3> Var21;
  struct<3> Var24;
  float fVar27;
  
  PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &Var0, 1, 1077936128, 0);
  PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &Var3, 1, 1077936128, 0);
  PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, -1, &Var6);
  fVar27 = SYSTEM::VMAG(Var6 - Var0);
  Var9 = { func_287((Var3.x - Var0.x), (Var3.f_1 - Var0.f_1), 0f) };
  Var12 = { func_286(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
  Var9 = { Var9 * Vector(2f, 2f, 2f) };
  Var15 = { Var0 - Var9 + Var12 };
  Var18 = { Var0 - Var9 - Var12 };
  Var21 = { Var3 + Var9 + Var12 };
  Var24 = { Var3 + Var9 - Var12 };
  Var24 = { Var24 };
  return func_284(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var15, Var18, Var21);
}