// agency_heist1.ysc @ L100492
void func_517(int iParam0)
{
  PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, false);
  PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
  PED::SET_PED_KEEP_TASK(iParam0, true);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_1032);
  PED::SET_PED_CONFIG_FLAG(iParam0, 29, false);
  PED::SET_PED_CONFIG_FLAG(iParam0, 116, false);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
  PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, false);
  PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, false);
}