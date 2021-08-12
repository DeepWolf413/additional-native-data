// am_mp_peds.ysc @ L88820
void func_1072(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
  if (bParam4)
  {
    return;
  }
  GRAPHICS::USE_PARTICLE_FX_ASSET(*uParam1);
  if (bParam3)
  {
    uParam2->f_8 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE(uParam1->f_1, *uParam0, uParam1->f_8, uParam1->f_11, uParam1->f_14, uParam1->f_7, false, false, false);
  }
  else
  {
    GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(uParam1->f_1, *uParam0, uParam1->f_8, uParam1->f_11, uParam1->f_14, uParam1->f_7, false, false, false);
  }
}