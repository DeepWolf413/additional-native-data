// am_vehicle_spawn.ysc @ L310368
int func_5200(int iParam0)
{
  int iVar0;
  var uVar1;
  
  if (func_5201(&uVar1, iParam0, 0, -1))
  {
    iVar0 = uVar1;
  }
  if (iVar0 <= 0)
  {
    iVar0 = VEHICLE::_GET_VEHICLE_MODEL_MONETARY_VALUE(iParam0);
  }
  if (iVar0 > 400000)
  {
    return 0;
  }
  return 1;
}