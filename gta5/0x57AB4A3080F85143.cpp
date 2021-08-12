// fm_content_tuner_robbery.ysc @ L123534
void func_2245(int iParam0, int iParam1)
{
  if (!func_2246(iParam0))
  {
    return;
  }
  if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
    PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
    TASK::CLEAR_PED_TASKS(iParam1);
    PED::SET_PED_KEEP_TASK(iParam1, false);
  }
}