// hunting1.ysc @ L87294
void func_2449(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  PED::SET_PED_CONFIG_FLAG(iParam0, 136, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 312, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 113, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 72, true);
  ENTITY::_0x18FF3110CF47115D(iParam0, 9, 1);
  PED::_0xAE6004120C18DF97(iParam0, 0, 0);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
  FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, true);
  if (PED::_0x33FA048675821DA7(iParam0, 0))
  {
    PED::_0x2EB75FB86C41F026(iParam0, 0, 0);
  }
  ENTITY::SET_ENTITY_VISIBLE(iParam0, true);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_ALLY"));
}