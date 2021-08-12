// stage_coach.ysc @ L3635
char* func_124()
{
  if (PED::_IS_PED_CARRYING(Global_35))
  {
    return "STAGE_COACH_CARRYING";
  }
  if (func_123() >= 0.8f)
  {
    return "STAGE_COACH_DRUNK";
  }
  if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
  {
    return "STAGE_COACH_WANTED";
  }
  if (func_61(func_60()) > 15)
  {
    return "STAGE_COACH_BOUNTY";
  }
  if (!func_122(0, 0, 8, 0, 0, 0))
  {
    return "STAGE_COACH_ROBBED";
  }
  return "STAGE_COACH_WANTED";
}