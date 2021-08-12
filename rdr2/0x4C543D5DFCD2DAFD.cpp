// property_use_core.ysc @ L46223
bool func_1634(var uParam0, bool bParam1)
{
  struct<4> Var0;
  int iVar4;
  int iVar5;
  struct<10> Var6;

  Var0 = { func_1719(0) };
  iVar5 = func_1236(bParam1);
  Var6.f_9 = -1591664384;
  iVar4 = 0;
  while (iVar4 < iVar5)
  {
    if (func_1237(iVar4, &Var6, bParam1))
    {
      if (INVENTORY::_0x4C543D5DFCD2DAFD(&Var0, uParam0))
      {
        return true;
      }
    }
    iVar4++;
  }
  return false;
}