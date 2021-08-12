// beat_burning_bodies.ysc @ L4291
void func_134(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6)
{
  if (!func_89(uParam4))
  {
    func_137(uParam4, 0);
  }
  else if (func_138(uParam4, fParam5))
  {
    if (*uParam1 < 1f)
    {
      *uParam1 = (*uParam1 + (fParam6 * 0.5f));
      GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "strength", *uParam1, false);
    }
    if (*uParam2 < 1f)
    {
      *uParam2 = (*uParam2 + (fParam6 * 0.75f));
      GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "smoke", *uParam2, false);
    }
    if (*uParam3 < 1f)
    {
      *uParam3 = (*uParam3 + fParam6);
      GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "spread", *uParam3, false);
    }
    func_320(uParam4);
  }
}