// freemode.ysc @ L845975
void func_12869(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = func_656(func_12868(iParam0, iParam2), -1, 0);
  iVar1 = func_12871(iParam2, iParam1);
  if (iVar1 == -1)
  {
    return;
  }
  if (VEHICLE::_GET_VEHICLE_WEAPON_CAPACITY(iParam0, iVar1) != iVar0)
  {
    VEHICLE::_SET_VEHICLE_WEAPON_CAPACITY(iParam0, iVar1, iVar0);
  }
  iVar2 = func_12870(iParam2, iParam1);
  if (iVar2 == -1)
  {
    return;
  }
  if (VEHICLE::_GET_VEHICLE_WEAPON_CAPACITY(iParam0, iVar2) != iVar0)
  {
    VEHICLE::_SET_VEHICLE_WEAPON_CAPACITY(iParam0, iVar2, iVar0);
  }
}