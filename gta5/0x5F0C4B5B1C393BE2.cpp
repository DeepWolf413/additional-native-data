// am_casino_peds.ysc @ L173914
void func_1839(var uParam0, float fParam1, bool bParam2)
{
  float fVar0;
  
  if (bParam2)
  {
    fVar0 = func_1840(fParam1);
  }
  else
  {
    fVar0 = fParam1;
  }
  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_230))
  {
    GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_230, "depth", fVar0, true);
  }
}