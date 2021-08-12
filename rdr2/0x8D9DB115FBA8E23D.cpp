// native_son2.ysc @ L35253
bool func_774(var uParam0)
{
  CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
  ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
  PED::SET_PED_CONFIG_FLAG(Global_35, 411, false);
  PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
  PED::SET_PED_CONFIG_FLAG(Global_35, 533, false);
  PED::SET_PED_CONFIG_FLAG(Global_35, 404, false);
  PED::SET_PED_CONFIG_FLAG(Local_83, 426, false);
  PED::_0xE4EF4382E22C780C(Local_83);
  PED::_0x8D9DB115FBA8E23D(Local_83);
  PED::_0xE4EF4382E22C780C(Global_35);
  PED::_0x8D9DB115FBA8E23D(Global_35);
  func_1409();
  func_430(&Local_1762, 1);
  func_430(&Local_2023, 1);
  func_1410(Local_83, joaat("BLIP_STYLE_COMPANION"), 1);
  func_1221(uParam0, Local_83, 1);
  func_1228();
  func_528(&uLocal_3244);
  func_923(&iLocal_405);
  return uParam0->f_607 == uParam0->f_607;
}