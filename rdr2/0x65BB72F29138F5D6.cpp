// act_hunting_2.ysc @ L10466
int func_242(var uParam0, vector3 vParam1, char* sParam4)
{
  if (func_593(uParam0->f_1, 1))
  {
    return 1;
  }
  STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
  if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
  {
    if (!func_593(uParam0->f_1, 8))
    {
      if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
      {
        GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
        *uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sParam4, vParam1, 0f, 0f, 0f, 1f, false, false, false, false);
        func_282(&(uParam0->f_1), 1);
        return 1;
      }
    }
  }
  return 0;
}