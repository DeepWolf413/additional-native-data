// arena_carmod.ysc @ L194294
int func_1704()
{
  if (((AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_722.f_12) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_722.f_12)) || AUDIO::IS_ANY_SPEECH_PLAYING(Local_722.f_12)) || AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_722.f_12))
  {
    return 0;
  }
  if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
  {
    return 0;
  }
  if (func_34(PLAYER::PLAYER_ID()))
  {
    return 0;
  }
  return 1;
}