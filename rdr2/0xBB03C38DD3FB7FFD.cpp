// bounty1.ysc @ L50702
bool func_1287(var uParam0)
{
  func_435(3);
  if (!func_1788(3, 1))
  {
    return false;
  }
  if (!func_424(iLocal_112, 0))
  {
    PERSCHAR::_0x59C7AD6FEA2AC449(func_905(3), func_372(0, 4));
    iLocal_112 = func_1789(3, 1, 0, 0, 1, 1);
    return false;
  }
  if (!func_906(3))
  {
    func_1790(3);
  }
  if (!func_1463(3, 1))
  {
    func_1791(3, 1);
  }
  if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_112))
  {
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_112, true, true);
  }
  WEAPON::SET_CURRENT_PED_WEAPON(iLocal_112, joaat("WEAPON_UNARMED"), true, 0, false, false);
  WEAPON::_HIDE_PED_WEAPONS(iLocal_112, 2, true);
  PED::SET_PED_AS_COP(iLocal_112, true);
  func_1792(iLocal_112);
  func_145(uParam0, iLocal_112, "VAL_Sheriff", 0);
  return true;
}