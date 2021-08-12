// abigail2_1.ysc @ L19187
int func_290(bool bParam0, int iParam1)
{
  int iVar0;

  if (!bParam0 && func_483(373691918))
  {
    return 0;
  }
  iVar0 = 0;
  if (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) < 2)
  {
    iVar0 = (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) + iParam1);
  }
  if (iVar0 < 0)
  {
    iVar0 = 0;
  }
  LAW::_0xF19706B1F8FFA88F(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), iVar0);
  func_197(bParam0);
  return 1;
}