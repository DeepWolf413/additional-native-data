// am_mp_arcade_peds.ysc @ L6271
void func_181()
{
  if (AUDIO::IS_STREAM_PLAYING())
  {
    AUDIO::STOP_STREAM();
  }
  Global_1316906 = 0;
  Global_1316910 = 0;
  Global_1316914 = -1;
  func_163();
  func_183();
  func_182();
}