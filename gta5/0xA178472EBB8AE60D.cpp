// agency_heist2.ysc @ L3867
void func_88()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_88) && !iLocal_154)
  {
    STREAMING::REQUEST_MODEL(joaat("frogger"));
    VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_993, sLocal_992);
    if (STREAMING::HAS_MODEL_LOADED(joaat("frogger")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_993, sLocal_992))
    {
      iLocal_88 = VEHICLE::CREATE_VEHICLE(joaat("frogger"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(800f, 0f, 0f), 0f, true, true, false);
      VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_88, iLocal_993, sLocal_992, true);
      VEHICLE::SET_PLAYBACK_SPEED(iLocal_88, 0.75f);
    }
  }
  else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_88, false))
  {
    if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_88))
    {
      VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_88);
      VEHICLE::DELETE_VEHICLE(&iLocal_88);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
      VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_993, sLocal_992);
      iLocal_154 = 1;
    }
    else
    {
      VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_88);
    }
  }
}