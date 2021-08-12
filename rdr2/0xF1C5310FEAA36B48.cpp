// beat_burning_bodies.ysc @ L10684
void func_322(char* sParam0, var uParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
  func_537(uParam1);
  if (bParam2)
  {
    *uParam1 = AUDIO::GET_SOUND_ID();
  }
  else
  {
    *uParam1 = -1;
  }
  if (iParam3 != 0)
  {
    AUDIO::_0xF1C5310FEAA36B48(*uParam1, sParam0, iParam3, 0, 0, 0);
  }
  else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
  {
    AUDIO::_0xDCF5BA95BBF0FABA(*uParam1, sParam0, fParam4, fParam5, fParam6, "", 0, 0, iParam7);
  }
  else
  {
    AUDIO::_0xCE5D0FFE83939AF1(*uParam1, sParam0, 0, 1);
  }
}