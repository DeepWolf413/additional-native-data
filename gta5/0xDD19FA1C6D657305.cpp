// am_casino_peds.ysc @ L307860
void func_4211(struct<3> Param0, float fParam3, bool bParam4)
{
  if (bParam4)
  {
    MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam3, true, false, false, false, false, false);
  }
  else
  {
    MISC::CLEAR_AREA(Param0, fParam3, true, false, false, false);
  }
  GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Param0, fParam3);
}