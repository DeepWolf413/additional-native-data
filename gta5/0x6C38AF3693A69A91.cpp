// am_casino_peds.ysc @ L174660
void func_1860(var uParam0, int iParam1)
{
  if ((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_232) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_231)) && func_15(iParam1))
  {
    GRAPHICS::USE_PARTICLE_FX_ASSET(uParam0->f_231);
    uParam0->f_230 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_232, iParam1, uParam0->f_234, uParam0->f_237, 1f, false, false, false);
  }
}