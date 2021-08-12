// startup.ysc @ L9946
void func_352(bool bParam0, bool bParam1)
{
  if (bParam1)
  {
    if (bParam0)
    {
      HUD::_HIDE_HUD_COMPONENT(128623374);
      GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
    }
    else
    {
      HUD::_DISPLAY_HUD_COMPONENT(128623374);
      GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
    }
  }
}