// ambient_diving.ysc @ L2225
void func_59()
{
  func_61();
  if (func_50(iLocal_409))
  {
    if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_409)))
    {
      VEHICLE::SET_BOAT_ANCHOR(iLocal_409, false);
    }
    ENTITY::SET_ENTITY_RECORDS_COLLISIONS(iLocal_409, false);
    if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_409))
    {
      ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_409);
    }
  }
}