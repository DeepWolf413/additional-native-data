// finale1.ysc @ L38455
bool func_821(var uParam0)
{
  func_1354(Local_225[0 /*9*/], func_1353(1, 6), 2, 1073741824 /* Float: 2f */);
  func_1354(Local_225[4 /*9*/], func_1353(5, 6), 2, 1073741824 /* Float: 2f */);
  func_1354(Local_976[0 /*8*/], func_1353(12, 20), 2, 1073741824 /* Float: 2f */);
  func_1354(Local_976[1 /*8*/], func_1397(3, 1), 2, 1073741824 /* Float: 2f */);
  func_1354(Local_976[2 /*8*/], func_1397(3, 2), 2, 1073741824 /* Float: 2f */);
  PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
  WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Global_35, false);
  func_27(&(vLocal_1539[2 /*3*/]), 1);
  func_27(&(vLocal_1539[3 /*3*/]), 1);
  func_1424();
  func_1425();
  func_403(uParam0, 50);
  func_1379(uParam0);
  func_1412(uParam0, 65536);
  PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1.15f);
  func_920(-1119100542, 1, 0, 0, 0, 0, 1, 0);
  if (WEAPON::HAS_PED_GOT_WEAPON(Local_225[0 /*9*/], joaat("WEAPON_REPEATER_CARBINE_SADIE"), 0, true))
  {
    WEAPON::_0xE9BD19F8121ADE3E(Local_225[0 /*9*/], joaat("WEAPON_REPEATER_CARBINE_SADIE"));
  }
  func_1426(Local_976[1 /*8*/], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
  func_1426(Local_976[2 /*8*/], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
  return uParam0->f_607 == uParam0->f_607;
}