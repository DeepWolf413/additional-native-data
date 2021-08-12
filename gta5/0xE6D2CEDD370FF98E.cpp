// fm_deathmatch_controler.ysc @ L536856
void func_9433(var uParam0)
{
  if (!MISC::IS_BIT_SET(Global_4456448.f_38, 3))
  {
    return;
  }
  func_4648();
  func_4649();
  GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_18));
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    OBJECT::_TOGGLE_USE_PICKUPS_FOR_PLAYER(PLAYER::PLAYER_ID(), joaat("pickup_vehicle_custom_script"), true);
  }
  func_4469(1);
  func_4647(0);
  func_4646(-1);
  Global_1694745 = 0;
  Global_1659916 = 0;
  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_60))
  {
    GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_60, false);
  }
  GRAPHICS::RESET_PARTICLE_FX_OVERRIDE("exp_xs_mine_slick");
  WEAPON::_0xE6D2CEDD370FF98E(1459276487, 1f);
  STREAMING::REMOVE_NAMED_PTFX_ASSET("veh_xs_vehicle_mods");
  STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_tn_slick");
  func_9434();
  func_4621(0);
}