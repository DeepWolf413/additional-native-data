// abigail2.ysc @ L36667
void func_295()
{
  if (func_464(iLocal_169))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_169, true);
    func_296(&uLocal_173, 3, iLocal_169, "ABIGAIL", 0, 1);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_169, 128, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_169, 4, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_169, 1024, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_169, 281, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_169, 29, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_169, 116, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_169, 118, true);
    PED::SET_PED_CAN_BE_TARGETTED(iLocal_169, true);
    TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_169, false);
    TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_169, false);
  }
}