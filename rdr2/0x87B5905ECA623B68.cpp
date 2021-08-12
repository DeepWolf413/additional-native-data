// cornwall1.ysc @ L17719
void func_172(bool bParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 4)
  {
    if (Local_885[iVar0 /*2*/].f_1)
    {
      FIRE::REMOVE_SCRIPT_FIRE(Local_885[iVar0 /*2*/]);
      if (bParam0)
      {
        GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(func_454(14, iVar0), 5f);
      }
      Local_885[iVar0 /*2*/].f_1 = 0;
    }
    iVar0++;
  }
}