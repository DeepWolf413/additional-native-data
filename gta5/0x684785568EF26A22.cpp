// am_casino_peds.ysc @ L104172
void func_982()
{
  if (ENTITY::DOES_ENTITY_EXIST(Global_2544210.f_298) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2544210.f_298, false))
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2544210.f_298))
    {
      VEHICLE::SET_VEHICLE_HANDBRAKE(Global_2544210.f_298, false);
      ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_2544210.f_298, true);
      AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_2544210.f_298, true);
      Global_2441237.f_502.f_60 = 0;
    }
    else
    {
      NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2544210.f_298);
    }
  }
  else
  {
    Global_2441237.f_502.f_60 = 0;
  }
}