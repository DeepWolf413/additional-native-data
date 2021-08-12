// coachrobberies.ysc @ L4558
void func_117(var uParam0, int iParam1, float fParam2)
{
  int iVar0;

  if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 0.5f)
  {
    return;
  }
  if (!func_25(&(uParam0->f_9.f_9)))
  {
    return;
  }
  if (!func_205(uParam0->f_9, 0, 1))
  {
    return;
  }
  if (func_269(&(uParam0->f_9.f_9), fParam2))
  {
    PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 1, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 17, true);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_9, false))
    {
      TASK::TASK_LEAVE_ANY_VEHICLE(0, 200, 0);
    }
    TASK::TASK_HANDS_UP(0, -1, iParam1, -1, true);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(uParam0->f_9, iVar0);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  }
}