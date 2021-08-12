// finale1.ysc @ L58894
int func_1392(int iParam0, int iParam1, int iParam2)
{
  struct<4> Var0;
  struct<4> Var4;
  var uVar8;
  int iVar13;

  iVar13 = INVENTORY::_0x6452B1D357D81742(iParam1, iParam0);
  if (func_2049(iParam1, iParam0, &iVar13, &Var0, &uVar8, 1, 0))
  {
    Var4 = { func_1202(iParam1, Var0, iVar13, 0) };
    if (func_1967(Var4, iParam2))
    {
      return 1;
    }
  }
  return 0;
}