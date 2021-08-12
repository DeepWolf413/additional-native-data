// abigail2_1.ysc @ L60054
bool func_1615(struct<4> Param0, int iParam4)
{
  struct<11> Var0;

  if (!func_599(0))
  {
    return func_2040(Param0, iParam4, 1) != -1;
  }
  if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
  {
    return false;
  }
  Var0.f_9 = -1591664384;
  if (!func_1173(Param0, &Var0, 0, 0))
  {
    return false;
  }
  if (Var0.f_10 == iParam4)
  {
    return true;
  }
  if (!INVENTORY::_0x734311E2852760D0(func_971(0), &Param0, iParam4))
  {
    return false;
  }
  return true;
}