// fm_mission_controller_2020.ysc @ L379294
void func_6042(var uParam0)
{
  if (MISC::IS_BIT_SET(Global_4718592.f_70989[uParam0->f_9 /*392*/].f_104, 14) && MISC::IS_BIT_SET(Local_36110.f_3347, uParam0->f_9))
  {
    if (func_6043(uParam0->f_11))
    {
      NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_39493.f_839.f_81[uParam0->f_9], false);
    }
    VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam0->f_11, Global_4718592.f_70989[uParam0->f_9 /*392*/].f_285, false, false);
    VEHICLE::_0x66E3AAFACE2D1EB8(uParam0->f_11, Global_4718592.f_70989[uParam0->f_9 /*392*/].f_285, 1);
  }
}