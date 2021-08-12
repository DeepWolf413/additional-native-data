// am_casino_peds.ysc @ L162672
void func_1489(int iParam0)
{
  HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
  if (iParam0 && !func_1490())
  {
    AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
  }
}