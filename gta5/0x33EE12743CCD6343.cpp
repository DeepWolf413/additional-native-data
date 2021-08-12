// casino_lucky_wheel.ysc @ L37896
void func_596(int iParam0, bool bParam1, bool bParam2)
{
  if (bParam1)
  {
    if (!func_588(iParam0))
    {
      func_609(iParam0, 1);
    }
    if (bParam2)
    {
      if (func_607(iParam0) == 0)
      {
        HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(func_606(iParam0));
        HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK(func_605(iParam0), 2, func_606(iParam0));
        if (AUDIO::HAS_SOUND_FINISHED(-1))
        {
          AUDIO::PLAY_SOUND_FRONTEND(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", true);
        }
        func_598(29, func_606(iParam0), func_604(iParam0), func_602(iParam0), func_600(iParam0), -1, 0, 0, 0, -1, 0);
        func_597(iParam0, 1);
      }
    }
  }
  else if (func_588(iParam0))
  {
    func_609(iParam0, 0);
  }
}