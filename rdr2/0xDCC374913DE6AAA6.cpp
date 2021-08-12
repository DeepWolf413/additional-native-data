// campfire_always.ysc @ L3761
void func_71(var uParam0)
{
  if ((MISC::GET_FRAME_COUNT() % 60) == 0)
  {
    if (func_226())
    {
      if ((func_227(uParam0) || func_228(uParam0)) || func_229(uParam0))
      {
        if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("AMB_CAMP_SLEEP_A_FRAME_WEATHER")))
        {
          TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("AMB_CAMP_SLEEP_A_FRAME_WEATHER"), true);
        }
      }
      else if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("AMB_CAMP_SLEEP_DEFAULT_WEATHER")))
      {
        TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("AMB_CAMP_SLEEP_DEFAULT_WEATHER"), true);
      }
    }
    else if ((func_227(uParam0) || func_228(uParam0)) || func_229(uParam0))
    {
      if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("AMB_CAMP_SLEEP_A_FRAME_WEATHER")))
      {
        TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("AMB_CAMP_SLEEP_A_FRAME_WEATHER"), false);
      }
    }
    else if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("AMB_CAMP_SLEEP_DEFAULT_WEATHER")))
    {
      TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("AMB_CAMP_SLEEP_DEFAULT_WEATHER"), false);
    }
  }
}