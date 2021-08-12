// shop_bait.ysc @ L17659
bool func_532(int iParam0, int iParam1)
{
  int iVar0;

  if (func_508(iParam0) == joaat("AMMO"))
  {
    iParam0 = func_879(iParam0);
  }
  iVar0 = TASK::_0xE47DD64B9F02677D(iParam0);
  if (iVar0 != 0)
  {
    *iParam1 = iVar0;
    return true;
  }
  return false;
}