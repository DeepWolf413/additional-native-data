// am_armwrestling.ysc @ L55537
int func_453()
{
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    func_455(0);
    GRAPHICS::DISABLE_SCREENBLUR_FADE();
    return 1;
  }
  if (func_454() == 3)
  {
    func_455(2);
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
  }
  if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() >= 250f)
  {
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
  }
  if (GRAPHICS::IS_SCREENBLUR_FADE_RUNNING() == 0)
  {
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
  }
  if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() <= 0f)
  {
    func_455(0);
    return 1;
  }
  return 0;
}