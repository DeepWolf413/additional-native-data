// rcm_poisoned_well2.ysc @ L43151
void func_1494(var uParam0)
{
  int iVar0;

  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_COMBAT_ANIMAL_WARN(0, Global_35, 2);
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  func_1068(uParam0);
}