// mudtown4.ysc @ L18876
void func_180(bool bParam0)
{
  if (bParam0)
  {
    if (!TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER"))
    {
      TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER", true);
    }
  }
  else if (TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER"))
  {
    TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER", false);
  }
}