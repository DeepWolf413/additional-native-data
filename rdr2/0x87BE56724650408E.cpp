// bounty_poster.ysc @ L4158
void func_155(var uParam0)
{
  if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_6, uParam0->f_9))
  {
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_6, false, true);
    TASK::TASK_POLICE(uParam0->f_6, true);
    TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_6, uParam0->f_9, func_226(&Local_136, 10), -1, false, true, 0, false, -1f, false);
    PED::_0x2208438012482A1A(uParam0->f_6, false, false);
  }
}