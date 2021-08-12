// cornwall1.ysc @ L56095
void func_1322()
{
  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_875))
  {
    fLocal_334 = func_1569(fLocal_334, fLocal_335, (BUILTIN::TIMESTEP() / 30f));
    fLocal_334 = func_1660(fLocal_334, 0f, 1f);
    GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_875, "strength", 0f, false);
    GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_875, "fadein", 0f, false);
    GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_875, "size", fLocal_334, false);
  }
}