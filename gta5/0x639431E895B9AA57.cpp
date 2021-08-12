// agency_prep2amb.ysc @ L9550
int func_181(int iParam0)
{
  struct<3> Var0;
  
  if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
  {
    func_69(39);
    return 0;
  }
  if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), iParam0, -1, false, false) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), iParam0, 0, false, false))
  {
    func_69(37);
    return 0;
  }
  if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
  {
    func_69(36);
    return 0;
  }
  Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
  if (Var0.x >= 10f || Var0.x <= -10f)
  {
    func_69(42);
    return 0;
  }
  else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
  {
    func_69(43);
    return 0;
  }
  return 1;
}