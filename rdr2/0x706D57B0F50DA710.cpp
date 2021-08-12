// abigail21_outro.ysc @ L1447
int func_72(char* sParam0, bool bParam1)
{
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    return 1;
  }
  if (bParam1)
  {
    if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
    {
      return 0;
    }
  }
  if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
  {
    return 1;
  }
  return 0;
}