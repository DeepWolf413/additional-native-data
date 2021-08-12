// am_mp_auto_shop.ysc @ L357088
void func_5530(var uParam0, var uParam1)
{
  ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*uParam0, false);
  PED::SET_PED_AS_ENEMY(*uParam0, false);
  WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
  PED::SET_PED_RESET_FLAG(*uParam0, 249, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 185, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 108, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 106, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 208, true);
  PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, false);
  PED::_0x2F3C3D9F50681DE4(*uParam0, true);
  PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, false);
  PED::SET_PED_CAN_RAGDOLL(*uParam0, false);
  AUDIO::_SET_PED_AUDIO_FOOTSTEP_LOUD(*uParam0, false);
  TASK::CLEAR_PED_TASKS(*uParam0);
}