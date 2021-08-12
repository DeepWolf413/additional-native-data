// beat_taunting.ysc @ L1773
void func_40(bool bParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(uLocal_1282[2]))
  {
    PED::SET_PED_CAN_BE_TARGETTED(uLocal_1282[2], bParam0);
    ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(uLocal_1282[2], bParam0);
    PED::SET_PED_CONFIG_FLAG(uLocal_1282[2], 301, !bParam0);
  }
  if (!ENTITY::IS_ENTITY_DEAD(uLocal_1282[3]))
  {
    PED::SET_PED_CAN_BE_TARGETTED(uLocal_1282[3], bParam0);
    ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(uLocal_1282[3], bParam0);
    PED::SET_PED_CONFIG_FLAG(uLocal_1282[3], 301, !bParam0);
  }
  if (!ENTITY::IS_ENTITY_DEAD(uLocal_1282[4]))
  {
    PED::SET_PED_CAN_BE_TARGETTED(uLocal_1282[4], bParam0);
    ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(uLocal_1282[4], bParam0);
    PED::SET_PED_CONFIG_FLAG(uLocal_1282[4], 301, !bParam0);
  }
}