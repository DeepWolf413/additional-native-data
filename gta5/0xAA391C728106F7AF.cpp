// abigail2.ysc @ L46394
void func_460(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
  if (func_462())
  {
    MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
    MISC::CLEAR_BIT(&(Global_99370.f_20), 2);
    MISC::SET_GAME_PAUSED(true);
    if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
    {
      PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
    }
    Global_99366 = { Param0 };
    Global_99369 = fParam3;
    Global_99365 = 1;
    if (iParam4 == 1)
    {
      MISC::SET_BIT(&(Global_99370.f_20), 14);
    }
    else
    {
      MISC::CLEAR_BIT(&(Global_99370.f_20), 14);
    }
    if (iParam5 == 1)
    {
      MISC::SET_BIT(&(Global_99370.f_20), 24);
    }
    else
    {
      MISC::CLEAR_BIT(&(Global_99370.f_20), 24);
    }
    func_21(1);
  }
}