// fm_bj_race_controler.ysc @ L516946
int func_8710()
{
  STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_sm");
  if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_sm"))
  {
  }
  else
  {
    GRAPHICS::SET_PARTICLE_FX_OVERRIDE("ent_dst_polystyrene", "scr_dst_inflatable");
    return 1;
  }
  return 0;
}