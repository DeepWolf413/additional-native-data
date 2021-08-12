// ambient_mrsphilips.ysc @ L5966
void func_108(char* sParam0, int iParam1, int iParam2)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_96440))
  {
    STATS::PLAYSTATS_MISSION_OVER(&Global_96440, 0, 0, false, true, false);
    StringCopy(&Global_96440, "", 64);
  }
  StringCopy(&Global_96440, sParam0, 64);
  STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_109(0));
}