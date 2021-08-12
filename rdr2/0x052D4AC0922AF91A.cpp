// native_son3.ysc @ L101644
int func_2748()
{
  if (!func_166(17))
  {
    if (!func_2746())
    {
      return 0;
    }
    if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_7972[9], "pbl_Fall"))
    {
      if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_7972[9], false))
      {
        ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_7972[9], "pbl_Fall", true);
      }
      func_453(17);
      if (func_2747(Local_5055[2 /*77*/], 1, 1069547520 /* Float: 1.5f */, 1065353216 /* Float: 1f */, 1, 0))
      {
        HUD::_0x052D4AC0922AF91A(9, 3);
      }
      return 1;
    }
    else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_7972[9], "pbl_Fall"))
    {
      ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_7972[9], "pbl_Fall");
    }
  }
  else
  {
    return 1;
  }
  return 0;
}