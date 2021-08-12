// train_robbery1.ysc @ L63242
void func_1455(int iParam0)
{
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_155[iParam0 /*182*/], true);
  PED::SET_PED_CAN_RAGDOLL(Local_155[iParam0 /*182*/], false);
  PED::SET_PED_CAN_RAGDOLL(Local_155[iParam0 /*182*/].f_1, false);
  PED::SET_PED_ACCURACY(Local_155[iParam0 /*182*/], 100);
  PED::SET_PED_COMBAT_RANGE(Local_155[iParam0 /*182*/], 3);
  PED::SET_PED_COMBAT_ABILITY(Local_155[iParam0 /*182*/], 2);
  PED::SET_PED_SEEING_RANGE(Local_155[iParam0 /*182*/], 750f);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 46, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 35, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 50, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 0, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 2, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 98, false);
  ENTITY::SET_ENTITY_INVINCIBLE(Local_155[0 /*182*/].f_1, true);
  ENTITY::SET_ENTITY_INVINCIBLE(Local_155[1 /*182*/].f_1, true);
  PED::_0xED1C764997A86D5A(Local_155[0 /*182*/], Local_155[0 /*182*/].f_1);
  PED::_0xED1C764997A86D5A(Local_155[1 /*182*/], Local_155[1 /*182*/].f_1);
  PED::SET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 167, true);
  PED::SET_PED_CONFIG_FLAG(Local_155[1 /*182*/], 167, true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_155[iParam0 /*182*/], true);
}