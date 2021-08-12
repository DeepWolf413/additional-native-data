// fm_mission_controller_2020.ysc @ L379118
void func_6035(var uParam0)
{
  if (MISC::IS_BIT_SET(Global_4718592.f_70989[uParam0->f_9 /*392*/].f_104, 9))
  {
    VEHICLE::SET_VEHICLE_BRAKE(uParam0->f_11, 5f);
    VEHICLE::SET_VEHICLE_HANDBRAKE(uParam0->f_11, true);
    VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_11, false);
  }
}