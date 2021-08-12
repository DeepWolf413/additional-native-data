// carsteal3.ysc @ L107860
int func_648(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
  int iVar0;
  
  iVar0 = PED::CREATE_PED(26, iParam4, Param0, fParam3, true, true);
  ENTITY::SET_ENTITY_HEALTH(iVar0, iParam6, 0);
  PED::SET_PED_MAX_HEALTH(iVar0, iParam6);
  PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
  WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam7, -1, false, true);
  WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iParam7);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
  PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
  PED::SET_PED_CONFIG_FLAG(iVar0, 118, true);
  PED::SET_PED_CONFIG_FLAG(iVar0, 152, true);
  PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
  PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
  PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
  return iVar0;
}