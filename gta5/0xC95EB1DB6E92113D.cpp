// am_mp_drone.ysc @ L5178
void func_191()
{
  if ((MISC::IS_BIT_SET(Local_185.f_5, 24) && !MISC::IS_BIT_SET(Local_185.f_5, 3)) && !Local_185.f_155)
  {
    if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
    {
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_158))
      {
        GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
        GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_185.f_158), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, false, false, false);
      }
    }
    Local_185.f_18 = 100;
    PAD::SET_PAD_SHAKE(0, 300, 150);
    if (AUDIO::HAS_SOUND_FINISHED(Local_185.f_35))
    {
      Local_185.f_35 = AUDIO::GET_SOUND_ID();
      AUDIO::PLAY_SOUND_FROM_ENTITY(Local_185.f_35, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_185.f_158), Local_185.f_156, true, 0);
    }
    if (Local_185.f_33 != -1)
    {
      AUDIO::STOP_SOUND(Local_185.f_33);
      AUDIO::RELEASE_SOUND_ID(Local_185.f_33);
      Local_185.f_33 = -1;
    }
    func_192(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_185.f_158), true), 0);
    MISC::SET_BIT(&(Local_185.f_5), 3);
    Local_185.f_155 = 1;
    func_23(&(Local_185.f_248), 0, 0);
  }
}