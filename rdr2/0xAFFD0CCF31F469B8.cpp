// cornwall1.ysc @ L54440
void func_1293()
{
  iLocal_372 = func_820(Global_35, 1, 0, 0);
  if ((!WEAPON::IS_WEAPON_VALID(iLocal_372) || iLocal_372 == joaat("WEAPON_UNARMED")) || !WEAPON::_IS_WEAPON_TWO_HANDED(iLocal_372))
  {
    iLocal_372 = func_820(Global_35, 1, 9, 0);
  }
  if ((!WEAPON::IS_WEAPON_VALID(iLocal_372) || iLocal_372 == joaat("WEAPON_UNARMED")) || !WEAPON::_IS_WEAPON_TWO_HANDED(iLocal_372))
  {
    iLocal_372 = WEAPON::_0xAFFD0CCF31F469B8(iLocal_867);
  }
  if ((!WEAPON::IS_WEAPON_VALID(iLocal_372) || iLocal_372 == joaat("WEAPON_UNARMED")) || !WEAPON::_IS_WEAPON_TWO_HANDED(iLocal_372))
  {
    iLocal_372 = func_1823();
  }
  if ((!WEAPON::IS_WEAPON_VALID(iLocal_372) || iLocal_372 == joaat("WEAPON_UNARMED")) || !WEAPON::_IS_WEAPON_TWO_HANDED(iLocal_372))
  {
    iLocal_372 = func_1824(6291456, 0);
  }
  if ((!WEAPON::IS_WEAPON_VALID(iLocal_372) || iLocal_372 == joaat("WEAPON_UNARMED")) || !WEAPON::_IS_WEAPON_TWO_HANDED(iLocal_372))
  {
    iLocal_372 = joaat("WEAPON_REPEATER_CARBINE");
  }
}