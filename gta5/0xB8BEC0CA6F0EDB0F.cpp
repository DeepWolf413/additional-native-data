// pb_prostitute.ysc @ L4443
void func_116(int iParam0)
{
  int iVar0;
  
  iVar0 = func_77(iParam0);
  if (iVar0 > -1)
  {
    if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
    {
      AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
    }
    if (!AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
    {
      func_118(iParam0);
      func_117(iVar0);
    }
  }
}