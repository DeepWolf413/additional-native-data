// rcm_poisoned_well3.ysc @ L13313
void func_516(var uParam0, bool bParam1)
{
  if (bParam1)
  {
    if (!uParam0->f_9)
    {
      uParam0->f_10 = AUDIO::GET_SOUND_ID();
      AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_10, "chime", *uParam0, "RHNTN_sounds", 0, 0, 0);
      if (func_265(Global_35, *uParam0, 0) < 30f)
      {
        AUDIO::_0x5AE0CB5F35F034FD(*uParam0, 100f, 150f, 15f, 1f, "GUST_CREEPY");
        MAP::TRIGGER_SONAR_BLIP(-1388606644, *uParam0);
      }
      uParam0->f_9 = 1;
    }
  }
  else if (uParam0->f_9)
  {
    if (AUDIO::_0x84848E1C0FC67DBB(uParam0->f_10))
    {
      AUDIO::RELEASE_SOUND_ID(uParam0->f_10);
      uParam0->f_10 = -1;
      uParam0->f_9 = 0;
    }
  }
}