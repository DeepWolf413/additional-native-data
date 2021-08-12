// rcm_dusters21.ysc @ L10749
void func_332(int iParam0)
{
  if (!PED::IS_PED_INJURED(Local_177) && !PED::IS_PED_INJURED(iLocal_814))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_177, false);
    if (PED::DOES_GROUP_EXIST(iLocal_1040))
    {
      if (!PED::IS_PED_IN_GROUP(Local_177))
      {
        PED::SET_PED_CONFIG_FLAG(Local_177, 279, true);
        PED::SET_PED_AS_GROUP_MEMBER(Local_177, iLocal_1040);
        PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_177, iLocal_1040, true);
        PED::SET_PED_CONFIG_FLAG(Local_177, 280, true);
        PED::SET_PED_CONFIG_FLAG(Local_177, 105, false);
      }
    }
    if (iParam0 == 1)
    {
      PED::FORCE_PED_MOTION_STATE(iLocal_814, joaat("MOTIONSTATE_RUN"), true, 0, false);
    }
  }
}