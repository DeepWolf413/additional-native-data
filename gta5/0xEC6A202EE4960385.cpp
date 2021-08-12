// finale_heist2a.ysc @ L119336
void func_843()
{
  if (!bLocal_1852 && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4261[0 /*3*/], false))
  {
    if (!VEHICLE::IS_VEHICLE_TYRE_BURST(Local_4261[0 /*3*/], 5, false))
    {
      VEHICLE::SET_VEHICLE_TYRE_BURST(Local_4261[0 /*3*/], 5, false, 1f);
      VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_4261[0 /*3*/], false);
      iLocal_1898 = 1;
    }
  }
}