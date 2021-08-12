// odriscolls5.ysc @ L26435
void func_441(char* sParam0, char* sParam1)
{
  if (TASK::IS_SCENARIO_GROUP_ENABLED(sParam1))
  {
    TASK::SET_SCENARIO_GROUP_ENABLED(sParam1, false);
  }
  if (!TASK::IS_SCENARIO_GROUP_ENABLED(sParam0))
  {
    TASK::SET_SCENARIO_GROUP_ENABLED(sParam0, true);
    TASK::FORCE_SCENARIO_GROUP_PRIORITY(sParam0, 1);
  }
}