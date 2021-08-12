// braithwaites2.ysc @ L36197
int func_780(var uParam0)
{
  if (!func_1310(uParam0, 0, !func_120(uParam0, 4)))
  {
    return 0;
  }
  func_905(0, 0);
  ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_14.f_23[0], 1881f, -1347f, 42.5f, 113.135f, false, true);
  func_1311(Local_14.f_23[0], 1, 1);
  WEAPON::SET_CURRENT_PED_WEAPON(bLocal_785, joaat("WEAPON_UNARMED"), true, 0, false, false);
  WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, joaat("WEAPON_MOONSHINEJUG"), true, -142743235);
  WEAPON::_REMOVE_AMMO_FROM_PED(Global_35, joaat("WEAPON_MOONSHINEJUG"), -1, -142743235);
  func_1102(-1925798111, 1, 0);
  func_1230();
  func_1280(1);
  EVENT::_0xE2C2FBB7825FFC66();
  return 1;
}