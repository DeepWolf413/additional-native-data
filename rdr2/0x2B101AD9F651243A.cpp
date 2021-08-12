// annesburg.ysc @ L10551
bool func_411(int iParam0)
{
  if (((func_406(1) || AUDIO::_0x2B101AD9F651243A()) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0)) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
  {
    return true;
  }
  return false;
}