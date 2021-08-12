// dialogue_handler.ysc @ L3592
void func_92()
{
  func_93();
  AUDIO::_0x0B568201DD99F0EB(bLocal_83);
  AUDIO::_0x61631F5DF50D1C34(bLocal_84);
  if (Global_22117)
  {
    AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_20744.f_368, Global_20744.f_369, Global_20744.f_370, bLocal_82);
    iLocal_36 = MISC::GET_GAME_TIMER();
  }
  else
  {
    AUDIO::START_SCRIPT_CONVERSATION(Global_20744.f_368, Global_20744.f_369, Global_20744.f_370, bLocal_82);
  }
  Global_21125 = 4;
}