// am_casino_peds.ysc @ L159735
int func_1462(int iParam0)
{
  int iVar0;
  var uVar1;
  
  if (iParam0 == -1)
  {
    return 0;
  }
  if (FILES::GET_DLC_VEHICLE_DATA(iParam0, &uVar1))
  {
    iVar0 = FILES::GET_DLC_VEHICLE_FLAGS(iParam0);
    if (!MISC::IS_BIT_SET(iVar0, false))
    {
      return 1;
    }
  }
  return 0;
}