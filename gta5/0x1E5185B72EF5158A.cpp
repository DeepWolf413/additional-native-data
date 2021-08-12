// armenian2.ysc @ L1257
void func_23()
{
  if (iLocal_2247)
  {
    if (iLocal_2248)
    {
      if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_2250))
      {
        if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_2250))
        {
          iLocal_2247 = 0;
          iLocal_2248 = 0;
        }
      }
    }
    else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_2250))
    {
      iLocal_2247 = 0;
    }
  }
  else if (iLocal_2249)
  {
    if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_2251))
    {
      iLocal_2249 = 0;
    }
  }
}