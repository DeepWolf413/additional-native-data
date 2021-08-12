// abigail2_1.ysc @ L57414
int func_1507(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
  struct<4> Var0;
  var uVar4;

  if (!func_571(iParam0, 0))
  {
    return 0;
  }
  Var0 = { func_1064(iParam0, Param1, iParam5, bParam6) };
  if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
  {
    return 0;
  }
  uVar4 = INVENTORY::_0xC97E0D2302382211(func_971(bParam6), &Var0, 0);
  return uVar4;
}