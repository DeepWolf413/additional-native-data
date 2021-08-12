// camp_beaverhollow.ysc @ L24981
void func_852(int iParam0, bool bParam1)
{
  char* sVar0;

  sVar0 = "";
  switch (iParam0)
  {
    case 1:
      sVar0 = "HSO_PLAYER_CHORES";
      break;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) == 0)
  {
    if (bParam1)
    {
      if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0) && !TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
      {
        TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, true);
      }
    }
    else if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
    {
      TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, false);
    }
  }
}