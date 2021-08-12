// appcontacts.ysc @ L14145
void func_289()
{
  if (!Global_77248)
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      if (MISC::IS_BIT_SET(Global_7668, 11))
      {
        if (!Global_19741)
        {
          TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
        }
        if (Global_77248)
        {
          PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
          PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
          PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
        }
        MISC::CLEAR_BIT(&Global_7668, 11);
      }
    }
  }
}