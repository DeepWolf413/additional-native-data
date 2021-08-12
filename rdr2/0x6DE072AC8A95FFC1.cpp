// train_robbery3.ysc @ L34214
bool func_725(var uParam0)
{
  func_39(0);
  WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
  WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
  if (!func_849(iLocal_121))
  {
    if (!func_1199(Global_35, iLocal_121, 1))
    {
      func_1186(&Global_35, &iLocal_121, -1, 1);
    }
  }
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_127, true);
    func_145(uParam0, iLocal_127, "JOHN", 0);
  }
  func_145(uParam0, Global_35, "ARTHUR", 0);
  VEHICLE::_0x6DE072AC8A95FFC1(iLocal_121, 1);
  VEHICLE::_0xE6C5E2125EB210C1(joaat("FREIGHT_GROUP"), 5, 0);
  func_1220(uParam0);
  iLocal_154 = 0;
  func_501(&uLocal_149);
  fLocal_136 = 1f;
  func_135(uParam0, 0);
  func_149(uParam0, 400f);
  func_150(uParam0, 420f);
  func_99(uParam0, 33554432);
  HUD::_HIDE_HUD_COMPONENT(724769646);
  func_1213(1);
  return uParam0->f_607 == uParam0->f_607;
}