// beechers2_2.ysc @ L75758
bool func_2046()
{
  if (!HUD::_UIPROMPT_IS_VALID(iLocal_207))
  {
    return false;
  }
  return HUD::_UIPROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW(iLocal_207);
}