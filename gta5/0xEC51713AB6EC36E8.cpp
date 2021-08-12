// am_mp_rc_vehicle.ysc @ L111248
void func_1057()
{
  if (func_1059())
  {
    if (func_984(Local_121.f_25))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_121.f_25))
      {
        NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(NETWORK::VEH_TO_NET(Local_121.f_25), 10000, 0, 0);
        func_1058(0);
      }
      else
      {
        NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_121.f_25);
      }
    }
  }
}