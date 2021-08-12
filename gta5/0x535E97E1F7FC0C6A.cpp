// offroad_races.ysc @ L109967
void func_789(char* sParam0)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    if (TASK::DOES_SCENARIO_GROUP_EXIST(sParam0))
    {
      if (!TASK::IS_SCENARIO_GROUP_ENABLED(sParam0))
      {
        TASK::SET_SCENARIO_GROUP_ENABLED(sParam0, true);
        TASK::SET_EXCLUSIVE_SCENARIO_GROUP(sParam0);
      }
    }
  }
}