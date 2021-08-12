// abigail2_1.ysc @ L78846
bool func_2302(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
  int iVar0;

  iVar0 = func_971(bParam7);
  if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
  {
    return false;
  }
  if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
  {
    return false;
  }
  return true;
}