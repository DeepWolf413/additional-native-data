// act_cinema.ysc @ L1665
void func_31()
{
  if (!MISC::ARE_STRINGS_EQUAL("NULL", sLocal_211))
  {
    if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_211))
    {
      AUDIO::STOP_AUDIO_SCENE(sLocal_211);
    }
  }
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEAVE_CINEMA"))
  {
    AUDIO::STOP_AUDIO_SCENE("LEAVE_CINEMA");
  }
}