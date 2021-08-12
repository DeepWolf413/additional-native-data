// act_bankrobbery01.ysc @ L2030
void func_23()
{
  if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_FWB")))
  {
    switch (func_180())
    {
      case 1:
        STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_HOVERLOOK"), 1);
        break;
      case 2:
        STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_CLEMENS"), 1);
        break;
      case 3:
        STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_SHADY"), 1);
        break;
    }
  }
}