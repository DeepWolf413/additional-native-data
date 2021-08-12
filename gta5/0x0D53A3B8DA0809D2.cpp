// am_mp_peds.ysc @ L88845
int func_1074(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
  if (bParam4)
  {
    return 1;
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[uParam1->f_5]))
  {
    GRAPHICS::USE_PARTICLE_FX_ASSET(*uParam1);
    if (bParam3)
    {
      uParam2->f_8 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam1->f_1, uParam0->f_1[uParam1->f_5], uParam1->f_8, uParam1->f_11, uParam1->f_7, false, false, false);
    }
    else
    {
      GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(uParam1->f_1, uParam0->f_1[uParam1->f_5], uParam1->f_8, uParam1->f_11, uParam1->f_7, false, false, false);
    }
    return 1;
  }
  return 0;
}