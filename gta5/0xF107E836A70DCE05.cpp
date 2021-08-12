// agency_heist3a.ysc @ L13665
void func_165(int iParam0)
{
  PED::SET_PED_DIES_WHEN_INJURED(iParam0, false);
  PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
  PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
  PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
  PED::SET_PED_KEEP_TASK(iParam0, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 32, false);
  PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
  PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
  PED::SET_PED_CAN_RAGDOLL(iParam0, false);
  PED::SET_PED_SEEING_RANGE(iParam0, 250f);
  PED::SET_PED_HEARING_RANGE(iParam0, 250f);
  PED::SET_PED_ID_RANGE(iParam0, 250f);
}