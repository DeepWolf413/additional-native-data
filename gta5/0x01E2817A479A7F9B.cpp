// am_casino_peds.ysc @ L173188
void func_1806(char* sParam0, bool bParam1)
{
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    return;
  }
  if (AUDIO::IS_AMBIENT_ZONE_ENABLED(sParam0))
  {
    AUDIO::SET_AMBIENT_ZONE_STATE(sParam0, bParam1, true);
  }
}