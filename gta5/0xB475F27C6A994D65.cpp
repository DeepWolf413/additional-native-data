// main_persistent.ysc @ L347181
void func_5709(struct<7> Param0)
{
  Global_1312475 = { Param0 };
  if (MISC::ARE_PROFILE_SETTINGS_VALID())
  {
    if (MISC::GET_PROFILE_SETTING(903) == 0)
    {
      if (func_471(53))
      {
        STATS::SET_PROFILE_SETTING_PROLOGUE_COMPLETE();
      }
    }
  }
}