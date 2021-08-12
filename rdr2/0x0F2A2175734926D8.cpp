// bjack_sp.ysc @ L21604
void func_726(bool bParam0)
{
  AUDIO::_STOP_SOUND_WITH_NAME("BET_AMOUNT", "HUD_POKER");
  if (bParam0)
  {
    AUDIO::PLAY_SOUND_FRONTEND("BET_MIN_MAX", "HUD_POKER", true, 0);
  }
  else
  {
    AUDIO::PLAY_SOUND_FRONTEND("BET_AMOUNT", "HUD_POKER", true, 0);
  }
}