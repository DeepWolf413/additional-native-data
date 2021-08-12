// act_cajav_homerob1.ysc @ L18827
bool func_558(int iParam0, bool bParam1)
{
  if (func_61(iParam0, 0, 1))
  {
    return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
  }
  return false;
}