// bounty1.ysc @ L85491
int func_2623(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
  struct<12> Var0;

  if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
  {
    return 0;
  }
  if (func_1551(iParam1))
  {
    return 0;
  }
  Var0.f_9 = -1591664384;
  if (!func_2647(iParam0, *uParam2, &Var0, 0))
  {
    return 0;
  }
  if (iParam3 < 0)
  {
    iParam3 = Var0.f_11;
  }
  else if (iParam3 > Var0.f_11)
  {
    iParam3 = Var0.f_11;
  }
  if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, uParam2, iParam3, iParam4))
  {
    return 0;
  }
  return 1;
}