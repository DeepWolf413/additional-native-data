// am_mp_submarine.ysc @ L345537
void func_5592(int iParam0, char* sParam1)
{
  VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
  AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0, true);
  AUDIO::SET_VEHICLE_RADIO_LOUD(iParam0, false);
  AUDIO::_0xC1805D05E6D4FE10(iParam0);
  AUDIO::SET_VEH_RADIO_STATION(iParam0, sParam1);
  AUDIO::SET_RADIO_TO_STATION_NAME(sParam1);
}