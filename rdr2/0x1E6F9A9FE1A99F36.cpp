// rcm_sadie11.ysc @ L30909
void func_976()
{
  if (func_421(iLocal_430, Global_36, 1) < 25f)
  {
    if (!func_81(&uLocal_679))
    {
      if (!func_221(6))
      {
        if (!func_452() && !func_960())
        {
          AUDIO::_0x1E6F9A9FE1A99F36("AUD_SPEECH_EVENT_VEH_EXIT_WAGON");
          func_329(6);
        }
        func_278(&uLocal_679);
      }
    }
    else if (func_353(&uLocal_679) > 10f)
    {
      AUDIO::_0x1E6F9A9FE1A99F36("AUD_SPEECH_EVENT_PLAYER_IS_OFF_WAGON_TOO_LONG");
      func_249(&uLocal_679);
    }
  }
  else
  {
    func_407(1, 0);
    if (func_81(&uLocal_679))
    {
      func_249(&uLocal_679);
    }
  }
}