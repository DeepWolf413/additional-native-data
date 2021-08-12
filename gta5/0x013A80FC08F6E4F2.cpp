// act_cinema.ysc @ L111922
void func_1038()
{
  sLocal_211 = "NULL";
  switch (Local_177.f_14)
  {
    case 7:
      sLocal_211 = "CINEMA_DOWNTOWN";
      break;
    
    case 9:
      sLocal_211 = "CINEMA_VINEWOOD";
      break;
    
    case 8:
      sLocal_211 = "CINEMA_MORNINGWOOD";
      break;
  }
  if (!MISC::ARE_STRINGS_EQUAL("NULL", sLocal_211))
  {
    if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_211))
    {
      AUDIO::START_AUDIO_SCENE(sLocal_211);
    }
  }
}