// bounty1.ysc @ L48811
void func_1224()
{
  if (func_424(iLocal_111, 0))
  {
    if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_140))
    {
      iLocal_140 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_bou1_climb_dust_loop", iLocal_111, 0f, 0f, 0f, 0f, 0f, 0f, PED::GET_PED_BONE_INDEX(iLocal_111, 11569), 1f, false, false, false);
      GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_140, "speed", 0.1f, false);
    }
  }
}