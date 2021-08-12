// property_use_core.ysc @ L33917
int func_1203(int iParam0, int iParam1)
{
  struct<5> Var0;
  struct<4> Var5;
  var uVar9;

  if (!func_1204(iParam0))
  {
    return -1;
  }
  Var0 = { func_1185(iParam0, 0, 0) };
  Var0.f_4 = iParam1;
  Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
  uVar9 = INVENTORY::_0xAB5F12746A099A0E(func_1209(0), &Var5);
  return uVar9;
}