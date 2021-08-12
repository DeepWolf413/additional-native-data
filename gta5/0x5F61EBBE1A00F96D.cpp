// am_casino_peds.ysc @ L173654
void func_1826(var uParam0)
{
  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_230))
  {
    GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_230, false);
  }
  if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_231))
  {
    STREAMING::REMOVE_NAMED_PTFX_ASSET(uParam0->f_231);
  }
  if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_232))
  {
    uParam0->f_232 = "";
  }
  if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_233))
  {
    uParam0->f_233 = "";
  }
}