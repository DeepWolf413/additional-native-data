// am_casino_peds.ysc @ L368025
int func_5330(var uParam0, int iParam1)
{
  if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
  {
    return 0;
  }
  if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_45[iParam1]) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_45[iParam1]))
  {
    return 0;
  }
  if (func_412() || func_411(0))
  {
    return 0;
  }
  if (func_2271())
  {
    return 0;
  }
  return 1;
}