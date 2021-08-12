// fmmc_playlist_controller.ysc @ L187047
void func_1663()
{
  if (MISC::IS_BIT_SET(Global_1702440, 0))
  {
    GRAPHICS::RESET_PARTICLE_FX_OVERRIDE("ent_amb_fbi_fire_lg");
    if (Global_4456448.f_127873 == 2 && MISC::IS_BIT_SET(Global_1702440, 3))
    {
      GRAPHICS::RESET_PARTICLE_FX_OVERRIDE("exp_grd_tankshell");
      MISC::CLEAR_BIT(&Global_1702440, 3);
    }
    MISC::CLEAR_BIT(&Global_1702440, 0);
  }
}