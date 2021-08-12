// abigail2_1.ysc @ L60082
bool func_1616(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
  int iVar0;

  if (func_1547(iParam0))
  {
    return false;
  }
  if (iParam1 <= 0)
  {
    return false;
  }
  if (!func_599(bParam4))
  {
    iVar0 = -1;
    return iVar0 != -1;
  }
  if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_971(bParam4), iParam0, iParam1, iParam2))
  {
    return false;
  }
  return true;
}