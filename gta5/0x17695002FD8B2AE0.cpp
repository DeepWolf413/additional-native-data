// abigail1.ysc @ L29709
void func_154(char* sParam0, int iParam1)
{
  STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), sParam0, true);
  if (MISC::IS_BIT_SET(iParam1, 0))
  {
    STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), sParam0, true);
  }
  if (MISC::IS_BIT_SET(iParam1, 1))
  {
    STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), sParam0, true);
  }
  if (MISC::IS_BIT_SET(iParam1, 2))
  {
    STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), sParam0, true);
  }
}