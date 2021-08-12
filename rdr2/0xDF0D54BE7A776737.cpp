// braithwaites2.ysc @ L52804
bool func_1287(char* sParam0)
{
  if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_LOADED(sParam0))
  {
    AUDIO::START_PRELOADED_CONVERSATION(sParam0);
    return true;
  }
  return false;
}