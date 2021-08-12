// beat_animal_mauling.ysc @ L1005
void func_18()
{
  func_61();
  WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_693[0], true, true);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_693[1], true, 0f);
  PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 1, true);
  PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 253, true);
  PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 448, true);
  PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 317, false);
  PED::SET_PED_CONFIG_FLAG(uLocal_693[1], 388, true);
  PED::SET_PED_CONFIG_FLAG(uLocal_693[1], 317, false);
  PED::_0xFD6943B6DF77E449(uLocal_693[1], false);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_693[0], joaat("REL_PLAYER_DISLIKE"));
  PED::SET_PED_USING_ACTION_MODE(uLocal_693[1], true, -1, 0);
  PED::_0x923583741DC87BCE(uLocal_693[0], "Default");
  PED::_0x89F5E7ADECCCB49C(uLocal_693[0], "injured_LEFT_LEG");
  ENTITY::_0x8C03CD6B5E0E85E8(uLocal_693[0], joaat("HUNTER"));
  func_62(uLocal_693[0], &Local_145, 0);
  func_62(uLocal_693[1], &Local_145, 0);
}