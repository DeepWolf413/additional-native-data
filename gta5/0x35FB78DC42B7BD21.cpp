// am_armwrestling.ysc @ L6190
void func_73(bool bParam0)
{
  if (bParam0)
  {
    GRAPHICS::ANIMPOSTFX_STOP("MP_race_crash");
    if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine"))
    {
      GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
    }
    if (GRAPHICS::GET_REQUESTINGNIGHTVISION())
    {
      GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPDark", 0, false);
    }
    else
    {
      GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPIn", 0, false);
    }
    CAM::_SET_CAM_EFFECT(1);
    Global_2441237.f_2835 = NETWORK::GET_NETWORK_TIME();
    Global_2441237.f_2835.f_1 = NETWORK::GET_NETWORK_TIME();
    MISC::SET_BIT(&(Global_2441237.f_2835.f_2), 0);
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_2441237.f_2835.f_2), 0);
  }
}