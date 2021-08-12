// gb_casino.ysc @ L370084
void func_5992()
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(func_5987()))
  {
    AUDIO::START_AUDIO_SCENE(func_5987());
  }
  if (func_8013() == 13)
  {
    AUDIO::PLAY_STREAM_FROM_VEHICLE(Local_2824);
  }
}