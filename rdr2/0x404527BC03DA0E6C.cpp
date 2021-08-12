// beat_prison_wagon.ysc @ L6769
void func_168()
{
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_1505) && ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_1505)))
  {
    if (!VEHICLE::IS_VEHICLE_STOPPED(iLocal_1505))
    {
      if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_1505) && !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1505, true))
      {
        VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1505, 10f, 4, false);
      }
    }
    else if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1505, true))
    {
      ENTITY::SET_ENTITY_VELOCITY(iLocal_1505, 0f, 0f, 0f);
    }
  }
}