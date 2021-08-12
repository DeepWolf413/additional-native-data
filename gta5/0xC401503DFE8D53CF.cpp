// am_crate_drop.ysc @ L323
void func_4(int iParam0)
{
  if (Local_77.f_2.f_1[iParam0 /*66*/].f_59 != 0)
  {
    if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_77.f_2.f_1[iParam0 /*66*/].f_59))
    {
      GRAPHICS::REMOVE_PARTICLE_FX(Local_77.f_2.f_1[iParam0 /*66*/].f_59, false);
      Local_77.f_2.f_1[iParam0 /*66*/].f_59 = 0;
    }
  }
}