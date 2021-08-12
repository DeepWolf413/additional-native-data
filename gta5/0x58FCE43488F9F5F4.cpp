// am_casino_peds.ysc @ L310640
void func_4323(float fParam0, int* iParam1, bool bParam2, bool bParam3)
{
  if (!MISC::IS_BIT_SET(*iParam1, bParam2))
  {
    AUDIO::PLAY_STREAM_FRONTEND();
    MISC::SET_BIT(iParam1, bParam2);
  }
  if (fParam0 >= 1f)
  {
    if (!MISC::IS_BIT_SET(*iParam1, bParam3))
    {
      AUDIO::STOP_STREAM();
      AUDIO::PLAY_SOUND_FRONTEND(-1, "Door_Open_Limit", "DLC_SM_Hangar_Door_Sounds", true);
      MISC::SET_BIT(iParam1, bParam3);
    }
  }
}