// short_update.ysc @ L88890
int func_2904(int iParam0, int iParam1)
{
  struct<5> Var0;
  struct<4> Var5;

  Var0 = { func_1948(iParam0, 0, 0) };
  Var5 = { func_1949(iParam0, Var0, Var0.f_4, 0) };
  if (func_1950(iParam0, Var0, Var0.f_4, 0) <= 0)
  {
    return 0;
  }
  INVENTORY::_0x6D2F987736A42D4C(func_221(0), &Var5, iParam1);
  return 1;
}