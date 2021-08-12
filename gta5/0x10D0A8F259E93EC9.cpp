// am_mp_defunct_base.ysc @ L309569
void func_5006()
{
  if (HUD::IS_WARNING_MESSAGE_ACTIVE())
  {
    if (CAM::IS_SCREEN_FADED_OUT())
    {
      if (func_5007())
      {
        CAM::DO_SCREEN_FADE_IN(0);
      }
    }
  }
  if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
  {
    SCRIPT::SHUTDOWN_LOADING_SCREEN();
  }
}