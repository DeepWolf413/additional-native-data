// property_use_core.ysc @ L37452
bool func_1307(var uParam0, int iParam1, var uParam2)
{
  struct<5> Var0;

  if (*uParam0 == -1)
  {
    return false;
  }
  if (iParam1 >= uParam0->f_2)
  {
    return false;
  }
  STREAMING::_0xD840C130D7AACFA5(uParam0->f_1, iParam1, &Var0);
  *uParam2 = { Var0 };
  uParam2->f_3 = Var0.f_3;
  uParam2->f_4 = Var0.f_4;
  return true;
}