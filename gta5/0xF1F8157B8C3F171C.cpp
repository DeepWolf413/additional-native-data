// rural_bank_setup.ysc @ L21497
bool func_343()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_357))
  {
    STREAMING::REQUEST_MODEL(joaat("ruffian"));
    STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
    if (STREAMING::HAS_MODEL_LOADED(joaat("ruffian")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02")))
    {
      iLocal_358 = VEHICLE::CREATE_VEHICLE(joaat("ruffian"), Local_139, fLocal_142, true, true, false);
      iLocal_357 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_358, 26, joaat("a_m_y_genstreet_02"), -1, true, true);
      PED::SET_PED_COMPONENT_VARIATION(iLocal_357, 0, 1, 0, 0);
      PED::SET_PED_COMPONENT_VARIATION(iLocal_357, 3, 0, 0, 0);
      PED::SET_PED_COMPONENT_VARIATION(iLocal_357, 4, 0, 0, 0);
      VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_358, 1);
      VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_358, 3000f);
      AUDIO::_0xF1F8157B8C3F171C(iLocal_358, "Trevor_Revs_Off", "PALETO_SCORE_SETUP_SOUNDS");
      ENTITY::SET_ENTITY_HEALTH(iLocal_358, 3000, 0);
      VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_358, 3);
      PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_357, 17, true);
      PED::SET_PED_FLEE_ATTRIBUTES(iLocal_357, 128, true);
      PED::SET_PED_FLEE_ATTRIBUTES(iLocal_357, 1024, true);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_02"));
      PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_357, 3);
      AUDIO::SET_VEH_RADIO_STATION(iLocal_358, AUDIO::GET_RADIO_STATION_NAME(6));
      PED::SET_PED_HELMET(iLocal_357, false);
    }
  }
  return (ENTITY::DOES_ENTITY_EXIST(iLocal_357) && ENTITY::DOES_ENTITY_EXIST(iLocal_358));
}