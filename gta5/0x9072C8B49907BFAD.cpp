// agency_heist3a.ysc @ L119185
int func_796(int* iParam0)
{
  if (!PED::IS_PED_INJURED(iParam0->f_16))
  {
    if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_16))
    {
      return 1;
    }
  }
  return 0;
}