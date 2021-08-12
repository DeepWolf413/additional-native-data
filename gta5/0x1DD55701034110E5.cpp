// am_pi_menu.ysc @ L402831
int func_5766()
{
  if ((((((((ENTITY::DOES_ENTITY_EXIST(func_1255()) && VEHICLE::IS_VEHICLE_DRIVEABLE(func_1255(), false)) && !func_1782()) && (((VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(func_1255())) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(func_1255()))) || func_1636(ENTITY::GET_ENTITY_MODEL(func_1255()))) || func_1235(1, 1, 0, 1, 1, 1, 1, 1, 1, 1))) && (!ENTITY::IS_ENTITY_IN_AIR(func_1255()) || ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(func_1255()) <= 1f)) && !func_5768()) && func_1286(63) <= 0) && !func_5767(PLAYER::PLAYER_ID(), func_1255())) && !(ENTITY::DOES_ENTITY_EXIST(Global_2544210.f_6611) && func_5767(PLAYER::PLAYER_ID(), Global_2544210.f_6611)))
  {
    return 1;
  }
  return 0;
}