// beat_gold_panner.ysc @ L10058
bool func_319(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, int iParam10)
{
  if (!func_163(iLocal_394, iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, iParam1))
  {
    if (!func_22(64))
    {
      if (!func_537(fParam6, 1, 0, 0))
      {
        if (bParam5 || bParam7)
        {
          func_538(0);
        }
        else
        {
          return false;
        }
      }
      if (bParam7)
      {
        AUDIO::PLAY_PAIN(iParam3, iParam8, 0f, bParam9, false);
      }
      func_146(iParam3, iParam4, func_380(sParam2), iParam10, 0);
    }
    func_168(&iLocal_394, iParam0);
    return true;
  }
  return false;
}