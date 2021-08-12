// event_area_appleseed_stg1.ysc @ L34389
void func_1159(int iParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = 0;
  while (iVar0 < func_1344(iParam0))
  {
    iVar1 = func_1160(iParam0, iVar0);
    if (iVar1 != 0 && MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
    {
      MAP::_MAP_DISCOVERY_SET_ENABLED(iVar1);
    }
    iVar0++;
  }
}