// michael4.ysc @ L89598
int func_393()
{
  int iVar0;
  
  iVar0 = VEHICLE::CREATE_VEHICLE(joaat("stretch"), 293.6189f, 176.4069f, 103.0985f, 69.5405f, true, true, false);
  VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
  VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "V1N3W88D");
  VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
  AUDIO::_FORCE_VEHICLE_ENGINE_AUDIO(iVar0, "STRETCH_MICHAEL_4");
  VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
  VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
  AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
  return iVar0;
}