// fm_capture_creator.ysc @ L69915
void func_795(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= 3)
  {
    if (func_796(iParam0, iVar0))
    {
      if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam1))
      {
        VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam1, iVar0, true);
        VEHICLE::_0xDBC631F109350B8C(iParam1, true);
        VEHICLE::_0x2311DD7159F00582(iParam1, true);
      }
      else if (iVar0 == Global_4456448.f_542)
      {
        VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 3);
      }
    }
    iVar0++;
  }
}