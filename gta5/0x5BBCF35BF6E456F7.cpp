// fm_deathmatch_controler.ysc @ L563693
void func_9818(var uParam0)
{
  int iVar0;
  
  if (func_9413())
  {
    Global_1703046 = 0;
  }
  iVar0 = 0;
  while (iVar0 <= 31)
  {
    uParam0->f_633[iVar0] = -1;
    uParam0->f_666[iVar0] = -1;
    iVar0++;
  }
  if (!MISC::IS_BIT_SET(Global_4456448.f_31, 4))
  {
    PHYSICS::_SET_LAUNCH_CONTROL_ENABLED(true);
  }
  if (!MISC::IS_BIT_SET(Global_1702440, false))
  {
    GRAPHICS::SET_PARTICLE_FX_OVERRIDE("ent_amb_fbi_fire_lg", "scr_xs_oil_jack_fire");
    if (Global_4456448.f_127873 == 2)
    {
      GRAPHICS::SET_PARTICLE_FX_OVERRIDE("exp_grd_tankshell", "scr_xs_exp_mine_sf");
      MISC::SET_BIT(&Global_1702440, 3);
    }
    MISC::SET_BIT(&Global_1702440, false);
  }
  VEHICLE::_0x5BBCF35BF6E456F7(true);
  MISC::SET_BIT(&(uParam0->f_1), false);
}