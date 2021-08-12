// bj.ysc @ L16957
int func_271(int iParam0)
{
  struct<3> Var0;
  struct<3> Var3;
  var uVar6;
  struct<3> Var9;
  struct<3> Var12;
  float fVar15;
  
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    ENTITY::GET_ENTITY_MATRIX(iParam0, &Var12, &uVar6, &uVar6, &Var3);
  }
  Var9 = { Var0 - Var3 };
  Var9.f_2 = 0f;
  Var12.f_2 = 0f;
  fVar15 = func_272(Var9, Var12);
  if (fVar15 < 0f)
  {
    return 1;
  }
  return 0;
}