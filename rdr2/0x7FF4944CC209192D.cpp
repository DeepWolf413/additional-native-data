// rcm_mr_mayor2.ysc @ L17784
bool func_653()
{
  PAD::_SET_CONTROL_CONTEXT(5, joaat("MINIGAMETRIGGERS"));
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MINIGAME_LEFT_TRIGGER"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MINIGAME_RIGHT_TRIGGER"), true);
  if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MINIGAME_LEFT_TRIGGER")) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MINIGAME_RIGHT_TRIGGER")))
  {
    AUDIO::PLAY_SOUND("DANGLE", "RMAYR2_Sounds", false, 0, true, 0);
    return true;
  }
  return false;
}