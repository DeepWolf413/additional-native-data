// weapon_locker.ysc @ L1390
bool func_73(var uParam0)
{
  struct<22> Var0;

  Var0.f_9 = -1591664384;
  if (!INVENTORY::_0x025A1B1FB03FBF61(1, uParam0, &Var0, 22, 1))
  {
    return false;
  }
  Var0.f_21 = 0;
  if (!INVENTORY::_0xD80A8854DB5CFBA5(1, uParam0, &Var0, 22))
  {
    return false;
  }
  func_104(Var0.f_4);
  if ((ENTITY::DOES_ENTITY_EXIST(func_105(0)) && func_100(WEAPON::_0xAFFD0CCF31F469B8(func_105(0)))) && WEAPON::_0xAFFD0CCF31F469B8(func_105(0)) == Var0.f_4)
  {
    WEAPON::_0xD4C6E24D955FF061(func_105(0));
  }
  if ((ENTITY::DOES_ENTITY_EXIST(func_105(1)) && func_100(WEAPON::_0xAFFD0CCF31F469B8(func_105(1)))) && WEAPON::_0xAFFD0CCF31F469B8(func_105(1)) == Var0.f_4)
  {
    WEAPON::_0xD4C6E24D955FF061(func_105(1));
  }
  if (Var0.f_14 >= 0)
  {
    WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, Var0.f_14, false, false);
  }
  return true;
}