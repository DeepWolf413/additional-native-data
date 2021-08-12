// player_horse.ysc @ L16366
int func_545(int iParam0, var uParam1)
{
  struct<29> Var0;

  Var0.f_9 = -1591664384;
  if (!func_719(iParam0, &Var0))
  {
    return 0;
  }
  Var0.f_14 = uParam1->f_14;
  Var0.f_15 = uParam1->f_15;
  Var0.f_16 = { uParam1->f_16 };
  Var0.f_24 = uParam1->f_24;
  Var0.f_25 = uParam1->f_25;
  Var0.f_26 = uParam1->f_26;
  Var0.f_27 = uParam1->f_27;
  Var0.f_28 = uParam1->f_28;
  if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_16)))
  {
    StringCopy(&(Var0.f_16), func_821(), 64);
  }
  if (!INVENTORY::_0xD80A8854DB5CFBA5(func_666(0), &Var0, &Var0, 29))
  {
    return 0;
  }
  return 1;
}