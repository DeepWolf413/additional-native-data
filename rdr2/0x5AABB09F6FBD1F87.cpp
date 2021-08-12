// mudtown1.ysc @ L35192
int func_774(char[4] cParam0)
{
  func_1257();
  cParam0->f_607 = cParam0->f_607;
  func_231(&uLocal_66);
  func_231(&uLocal_542);
  func_794(128);
  func_135(cParam0, 0);
  func_1252(0);
  func_903(cParam0);
  if (!func_8(cParam0, 8))
  {
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 3.9f);
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[3], 4.5f);
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[2], 5f);
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[1], 5.2f);
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[0], 4.6f);
    PED::_SET_PED_BODY_COMPONENT(Local_236[5 /*4*/].f_1, 1016389820);
    PED::_UPDATE_PED_VARIATION(Local_236[5 /*4*/].f_1, false, true, true, true, false);
  }
  VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[3], 0f);
  VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[4], 0f);
  VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[2], 0f);
  VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[0], 0f);
  VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[1], 0f);
  VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[3], 0f);
  VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[4], 0f);
  VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[2], 0f);
  VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[0], 0f);
  VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[1], 0f);
  return 1;
}