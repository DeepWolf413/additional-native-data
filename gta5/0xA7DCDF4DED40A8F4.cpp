// rampage1.ysc @ L8447
void func_217(var uParam0)
{
  int iVar0;
  
  if (!func_17(*uParam0))
  {
    return;
  }
  iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1, false);
  if (!func_17(iVar0))
  {
    return;
  }
  VEHICLE::_0xA7DCDF4DED40A8F4(*uParam0, true);
}