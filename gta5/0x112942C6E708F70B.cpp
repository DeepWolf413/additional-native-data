// bailbond1.ysc @ L38742
void func_361(int iParam0)
{
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_612);
  PED::SET_PED_CONFIG_FLAG(iParam0, 177, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 116, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 42, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 118, true);
  PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iParam0, 10f, 5);
  PED::SET_PED_AS_ENEMY(iParam0, true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
}