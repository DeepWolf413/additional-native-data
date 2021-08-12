// act_fishing06.ysc @ L31769
void func_896(int iParam0, int iParam1, int iParam2)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
  {
    TASK::CLEAR_PED_TASKS(iParam0, true, false);
    func_1216(iParam0);
    TASK::TASK_COMBAT_PED(iParam0, iParam1, 16777216, 0);
    func_1217(iParam0, iParam2);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
    PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
    PED::SET_PED_CONFIG_FLAG(iParam0, 112, true);
    PED::SET_PED_CONFIG_FLAG(iParam0, 113, true);
    FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 33, true);
    FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 32, true);
    FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 9, true);
  }
}