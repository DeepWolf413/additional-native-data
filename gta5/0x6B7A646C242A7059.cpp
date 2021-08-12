// agency_heist2.ysc @ L110016
void func_675(int iParam0, int iParam1)
{
  PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iParam1, 1862763509);
  PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iParam1);
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
    {
      PED::SET_PED_AS_ENEMY(iParam0, false);
      PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
      PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
      ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
      PED::SET_PED_CAN_RAGDOLL(iParam0, true);
      PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
      PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
      PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
      PED::SET_PED_DIES_WHEN_INJURED(iParam0, false);
      PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
      PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
      PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
      PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
      PED::SET_PED_CONFIG_FLAG(iParam0, 174, true);
      PED::SET_PED_CONFIG_FLAG(iParam0, 169, true);
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
    }
  }
}