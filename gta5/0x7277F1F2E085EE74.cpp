// fm_mission_controller_2020.ysc @ L374229
int func_5935(bool bParam0)
{
  if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_39493.f_839.f_114[bParam0]))
  {
    MISC::SET_BIT(&(Local_36110.f_838), bParam0);
    return 1;
  }
  if (func_364(Global_4718592.f_84045[bParam0 /*185*/].f_1))
  {
    return 0;
  }
  if (!func_5937(Global_4718592.f_84045[bParam0 /*185*/]))
  {
    return 0;
  }
  if (func_5936())
  {
    return 0;
  }
  if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(8))
  {
    return 0;
  }
  if (!func_1213(&(Local_39493.f_839.f_114[bParam0]), &(Global_4718592.f_84045[bParam0 /*185*/]), func_834(18, bParam0), 0))
  {
    return 0;
  }
  func_1210(bParam0, NETWORK::NET_TO_VEH(Local_39493.f_839.f_114[bParam0]));
  func_626();
  MISC::SET_BIT(&(Local_36110.f_838), bParam0);
  return 1;
}