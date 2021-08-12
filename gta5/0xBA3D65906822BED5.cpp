// am_casino_peds.ysc @ L229312
void func_2523(bool bParam0)
{
  GRAPHICS::_SET_HIDOF_ENV_BLUR_PARAMS(false, false, 0f, 0f, 0f, 0f);
  if (!func_2526())
  {
    bParam0 = false;
  }
  if (bParam0)
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
  }
  if (func_2526())
  {
    STREAMING::CLEAR_FOCUS();
  }
  NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
  if (GRAPHICS::IS_SCREENBLUR_FADE_RUNNING())
  {
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(200f);
  }
  HUD::BUSYSPINNER_OFF();
  if (Global_4456448 == 1 || Global_4456448 == 0)
  {
    func_2525();
  }
  Global_1669478 = 0;
  func_2524();
  func_2515();
}