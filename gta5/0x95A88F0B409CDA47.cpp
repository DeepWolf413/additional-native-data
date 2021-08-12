// armenian1.ysc @ L41186
int func_350(struct<3> Param0, float fParam3)
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_3048[1 /*7*/]))
  {
    STREAMING::REQUEST_MODEL(iLocal_2915);
    if (STREAMING::HAS_MODEL_LOADED(iLocal_2915))
    {
      Local_3048[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_2915, Param0, fParam3, true, true, false);
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3048[1 /*7*/], 5f);
      VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_3048[1 /*7*/], 0f);
      VEHICLE::SET_VEHICLE_COLOURS(Local_3048[1 /*7*/], 28, 28);
      VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_3048[1 /*7*/], 23, 0);
      VEHICLE::SET_VEHICLE_STRONG(Local_3048[1 /*7*/], true);
      VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_3048[1 /*7*/], true);
      VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_3048[1 /*7*/], false);
      ENTITY::SET_ENTITY_HEALTH(Local_3048[1 /*7*/], 2000, 0);
      VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_3048[1 /*7*/], false, 0);
      VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_3048[1 /*7*/], "2603AM56");
      VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3048[1 /*7*/], false);
      VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3048[1 /*7*/], false);
      ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_3048[1 /*7*/], false);
      ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_3048[1 /*7*/], false);
      VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_3048[1 /*7*/], true);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2915);
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}