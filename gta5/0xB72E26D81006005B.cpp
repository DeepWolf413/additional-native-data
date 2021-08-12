// barry3a.ysc @ L45988
void func_420()
{
  if (func_204(Local_145.f_4))
  {
    VEHICLE::SET_VEHICLE_STRONG(Local_145.f_4, true);
    VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_145.f_4, true);
    VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_145.f_4, false);
    VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_145.f_4, false);
    if (!bLocal_152)
    {
      VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_145.f_4);
    }
    func_421(Local_145.f_4, 0);
  }
}