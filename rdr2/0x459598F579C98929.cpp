// bathing.ysc @ L1721
void func_16(int iParam0)
{
  int iVar0;

  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 9)
  {
    if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[iVar0]))
    {
      GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_120[iVar0], false);
    }
    iVar0++;
  }
}