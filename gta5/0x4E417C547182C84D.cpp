// am_heli_taxi.ysc @ L13614
int func_367()
{
  if (VEHICLE::_DOES_VEHICLE_ALLOW_RAPPEL(iLocal_1214) && !func_343())
  {
    return 1;
  }
  return 0;
}