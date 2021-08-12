// am_mp_business_hub.ysc @ L342733
int func_5651()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_1827.f_642))
  {
    STREAMING::REQUEST_MODEL(joaat("speedo4"));
    if (STREAMING::HAS_MODEL_LOADED(joaat("speedo4")))
    {
      Local_1827.f_642 = VEHICLE::CREATE_VEHICLE(joaat("speedo4"), -1501.25f, -2992.335f, -83.2073f, 180f, false, false, true);
      if (ENTITY::DOES_ENTITY_EXIST(Local_1827.f_642))
      {
        ENTITY::SET_ENTITY_INVINCIBLE(Local_1827.f_642, true);
        VEHICLE::SET_VEHICLE_FIXED(Local_1827.f_642);
        ENTITY::SET_ENTITY_HEALTH(Local_1827.f_642, 1000, 0);
        VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1827.f_642, 1000f);
        VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_1827.f_642, 1000f);
        VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_1827.f_642, 0f);
        ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_1827.f_642, false);
        VEHICLE::SET_VEHICLE_MOD_KIT(Local_1827.f_642, 0);
        ENTITY::FREEZE_ENTITY_POSITION(Local_1827.f_642, true);
        ENTITY::SET_ENTITY_COLLISION(Local_1827.f_642, false, false);
        VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1827.f_642, 2, false, true);
        VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1827.f_642, 3, false, true);
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("speedo4"));
      }
      return 0;
    }
  }
  return 1;
}