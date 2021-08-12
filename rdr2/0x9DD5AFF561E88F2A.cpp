// act_hunting_2.ysc @ L3542
void func_68(var uParam0)
{
  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
  {
    GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
    STREAMING::REMOVE_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
    func_282(&(uParam0->f_1), 4);
  }
}