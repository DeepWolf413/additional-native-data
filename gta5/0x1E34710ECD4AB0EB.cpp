// abigail1.ysc @ L30127
void func_162(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
  if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_96440))
  {
    return;
  }
  if (MISC::COMPARE_STRINGS(sParam0, &Global_96440, false, -1) != 0)
  {
    return;
  }
  STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_93547);
  StringCopy(&Global_96440, "", 64);
}