// abigail2_1.ysc @ L71673
bool func_2070(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
  bool bVar0;

  if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
  {
    bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
  }
  else
  {
    bVar0 = true;
  }
  if (bVar0)
  {
    func_2316(cParam1, cParam0);
    if (bParam6)
    {
      AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
    }
    else
    {
      AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
    }
    if (bParam4)
    {
      AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
    }
  }
  return bVar0;
}