// am_mp_property_int.ysc @ L246592
void func_2567(var uParam0)
{
  if (((iLocal_11891 > -1 && func_156(iLocal_11891)) && Local_10542[iLocal_11891 /*21*/].f_2 == 1) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_mp_cig_plane"))
  {
    func_2569(uParam0);
    if (uParam0->f_301[iLocal_11891] == 1)
    {
      func_2568(uParam0);
    }
    if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
    {
      if (!uParam0->f_307[iLocal_11891])
      {
        if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -2121855126))
        {
          GRAPHICS::USE_PARTICLE_FX_ASSET("scr_mp_cig_plane");
          GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("ent_anim_cig_exhale_mth_plane", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
          uParam0->f_301[iLocal_11891] = 0;
          uParam0->f_307[iLocal_11891] = 1;
        }
      }
      else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1376297906))
      {
        GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_295[iLocal_11891], "light_intensity", (uParam0->f_313 * 1.5f), false);
        uParam0->f_301[iLocal_11891] = 1;
        uParam0->f_307[iLocal_11891] = 0;
      }
    }
  }
}