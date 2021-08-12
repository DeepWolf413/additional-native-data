// flow_controller.ysc @ L21019
void func_732()
{
  if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
  {
    Global_0.f_1 = -1;
    return;
  }
  func_730(&Global_0, 8);
  Global_0.f_1 = -1;
}