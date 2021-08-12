// beat_dead_john.ysc @ L9532
void func_206()
{
  if (func_207(Global_35, iLocal_1229, 1, 0))
  {
    if (iLocal_1210 == 0)
    {
      TASK::SET_SCENARIO_TYPE_ENABLED("PROP_HUMAN_SLEEP_BED_PILLOW", false);
      iLocal_1210 = 1;
    }
  }
  else if (iLocal_1210 == 1)
  {
    TASK::SET_SCENARIO_TYPE_ENABLED("PROP_HUMAN_SLEEP_BED_PILLOW", true);
    iLocal_1210 = 0;
  }
}