// dreyfuss1.ysc @ L43356
void func_425()
{
  if (!func_437(iLocal_156))
  {
    while (!func_427(&iLocal_156, 68, -1472.9f, 483.3f, 115.2f, 75f, 1))
    {
      SYSTEM::WAIT(0);
    }
  }
  if (func_437(iLocal_156))
  {
    func_426(&uLocal_165, 3, iLocal_156, "DREYFUSS", 0, 1);
    PED::SET_PED_CONFIG_FLAG(iLocal_156, 177, true);
    PED::SET_PED_CAN_BE_TARGETTED(iLocal_156, true);
    ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_156, true, 0f);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_156, true, 1);
    TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_156, false);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_156, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_156, 281, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_156, 42, true);
  }
}