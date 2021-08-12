// fm_race_controler.ysc @ L30579
void func_852(var uParam0)
{
  VEHICLE::SET_VEHICLE_SIREN(*uParam0, true);
  AUDIO::SET_SIREN_WITH_NO_DRIVER(*uParam0, true);
  AUDIO::_TRIGGER_SIREN(*uParam0);
}