// beat_outlaw_transport.ysc @ L5476
int func_131()
{
  bool bVar0;

  if (func_50(iLocal_819, 1))
  {
    return 1;
  }
  bVar0 = false;
  if (VEHICLE::_0xE015CF1F2C0959D8(iLocal_818) == 3)
  {
    bVar0 = true;
  }
  if (VEHICLE::_0xE015CF1F2C0959D8(iLocal_818) == 4)
  {
    bVar0 = true;
  }
  if (bVar0)
  {
    VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_818, true);
    func_28(1, 0);
    func_362(&(Local_37.f_5), 0);
    func_24(&iLocal_819, 1);
    return 1;
  }
  return 0;
}