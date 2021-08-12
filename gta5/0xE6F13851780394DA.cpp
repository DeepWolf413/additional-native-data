// am_heli_taxi.ysc @ L6520
void func_159()
{
  if (!iLocal_1201)
  {
    if (Local_160.f_24 == 2)
    {
      if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_160.f_3))
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_160.f_3))
        {
          VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_1214, 1f);
          iLocal_1201 = 1;
        }
        else
        {
          NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_160.f_3);
        }
      }
    }
  }
}