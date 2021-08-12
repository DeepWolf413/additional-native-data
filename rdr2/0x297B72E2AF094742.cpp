// rcm_abigail11.ysc @ L1401
void func_12(var uParam0)
{
  if (!func_6(uParam0->f_172, 8192))
  {
    return;
  }
  func_49(uParam0, func_96(uParam0, func_95(uParam0)));
  if (uParam0->f_177 != 2)
  {
    if (CAM::IS_SCREEN_FADED_OUT())
    {
      GRAPHICS::_0x297B72E2AF094742(6);
    }
    if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
    {
      if (!CAM::IS_SCREEN_FADED_IN())
      {
        CAM::DO_SCREEN_FADE_IN(0);
      }
      HUD::DISPLAY_HUD(true);
      MAP::DISPLAY_RADAR(true);
    }
    func_97(0);
  }
  else if (!CAM::IS_SCREEN_FADED_OUT())
  {
    CAM::DO_SCREEN_FADE_OUT(0);
  }
}