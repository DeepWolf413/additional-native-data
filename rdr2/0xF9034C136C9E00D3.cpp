// campfire_gang.ysc @ L1729
void func_36(var uParam0)
{
  char* sVar0;

  sVar0 = func_181(uParam0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
  {
    if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0))
    {
      TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, true);
    }
  }
}