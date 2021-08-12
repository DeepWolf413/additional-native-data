// re_paparazzi.ysc @ L3548
void func_82()
{
  if (!PED::IS_PED_INJURED(iLocal_86))
  {
    PED::SET_PED_KEEP_TASK(iLocal_86, true);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_69, 1862763509);
    if (!Global_3 && !bLocal_70)
    {
      PED::SET_PED_CONFIG_FLAG(iLocal_86, 317, true);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, false);
    }
  }
  func_86(-1, 0);
  func_83();
  AUDIO::UNLOCK_MISSION_NEWS_STORY(62);
  func_282();
}