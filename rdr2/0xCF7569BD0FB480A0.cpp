// beat_booby_trap.ysc @ L16246
void func_498(int iParam0, int iParam1)
{
  int iVar0;

  if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
  {
    PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[0], 0);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_AIM_AT_ENTITY(0, Global_35, iParam0, 1, 1);
    TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
    func_628(iLocal_426[0], &iVar0, 0, 0, 1, 1);
    func_642(iLocal_426[0]);
    func_494(iLocal_426[0]);
  }
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
  {
    PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[1], 0);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_AIM_AT_ENTITY(0, Global_35, iParam1, 1, 1);
    TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 5000, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
    TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
    func_628(iLocal_426[1], &iVar0, 0, 0, 1, 1);
    func_642(iLocal_426[1]);
    func_494(iLocal_426[1]);
  }
}