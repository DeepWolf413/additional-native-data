// saint_denis1.ysc @ L97420
bool func_2621(char[4] cParam0)
{
  if (func_195(iLocal_1759, 268435456))
  {
    return true;
  }
  if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uLocal_1769[10], "Pl_Dutch_Callover") && !ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_1769[10], "Pl_Dutch_Callover"))
  {
    ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_1769[10], "Pl_Dutch_Callover");
    if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_1769[10], true, false))
    {
      if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uLocal_1769[10], true))
      {
        ANIMSCENE::LOAD_ANIM_SCENE(uLocal_1769[10]);
      }
    }
  }
  else if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_1769[10], "Pl_Dutch_Callover"))
  {
    ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_1769[10], "Pl_Dutch_Callover", true);
    if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_1769[10], false))
    {
      ANIMSCENE::START_ANIM_SCENE(uLocal_1769[10]);
    }
    AUDIO::_0xF232C2C546AC16D0("NBD1_IG8_CALL");
    if (!func_195(iLocal_1759, 268435456))
    {
      func_408(&iLocal_1759, 268435456);
    }
    return true;
  }
  return false;
}