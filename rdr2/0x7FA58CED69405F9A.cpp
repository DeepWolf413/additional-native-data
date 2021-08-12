// hideout_hangingdogranch_es.ysc @ L4694
void func_170(var uParam0)
{
  PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 4, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 278, false);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 305, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 306, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 21, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 314, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 466, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 388, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 326, true);
  ENTITY::_0x18FF3110CF47115D(*uParam0, 16, 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 24, false);
  PED::_0x2E5B5D1F1453E08E(*uParam0, 1);
  MISC::_0x7FA58CED69405F9A(*uParam0, 3);
  HUD::_UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(*uParam0);
  func_304(*uParam0, 0);
}