// michael1.ysc @ L40917
int func_372(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
  int iVar0;
  
  iVar0 = PED::CREATE_PED(26, iParam0, Param1, fParam4, true, true);
  PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
  PED::SET_PED_MAX_HEALTH(iVar0, iParam9);
  ENTITY::SET_ENTITY_HEALTH(iVar0, iParam9, 0);
  PED::ADD_ARMOUR_TO_PED(iVar0, iParam10);
  PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
  PED::SET_PED_AS_ENEMY(iVar0, true);
  PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 47, true);
  WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam6, -1, true, true);
  WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam6, true);
  WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iParam6);
  if (iParam7 != 0)
  {
    WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, iParam6, iParam7);
  }
  PED::SET_PED_DUCKING(iVar0, bParam8);
  TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, false);
  PED::SET_PED_CONFIG_FLAG(iVar0, 188, true);
  PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
  PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
  PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
  func_373(iVar0, 0);
  return iVar0;
}