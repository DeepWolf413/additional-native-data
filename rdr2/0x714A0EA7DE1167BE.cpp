// beat_campfire_ambush.ysc @ L3657
void func_131()
{
  if (!func_28(2))
  {
    if (iLocal_283 < 6 && func_304(Global_35, Local_20.f_51, 1) <= 35f)
    {
      AUDIO::START_AUDIO_SCENE("RE_AMBUSH_CAMPFIRE_AMBUSH_SCENE");
      func_36(2);
    }
  }
  else if (iLocal_283 == 12)
  {
    AUDIO::STOP_AUDIO_SCENE("RE_AMBUSH_CAMPFIRE_AMBUSH_SCENE");
    func_47(2);
  }
  if (((iLocal_283 < 6 && (!func_45(&uLocal_339) || func_129(&uLocal_339) >= 3f)) && func_304(Global_35, Local_20.f_51, 1) <= 35f) && AUDIO::_0x714A0EA7DE1167BE("FOLIAGE", "RECA_Sounds"))
  {
    AUDIO::_PLAY_SOUND_FROM_POSITION("FOLIAGE", func_305(), "RECA_Sounds", false, 0, true, 0);
    func_141(&uLocal_339);
  }
}