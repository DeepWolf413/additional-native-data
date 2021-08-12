// am_casino_peds.ysc @ L218244
int func_2143(int iParam0, struct<3> Param1, float* fParam4)
{
  float fVar0;
  struct<3> Var1;
  
  MISC::_GET_GROUND_Z_FOR_3D_COORD_2(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar0, false, false);
  Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
  MISC::_GET_GROUND_Z_FOR_3D_COORD_2(Param1, fParam4, false, false);
  *fParam4 = (*fParam4 + ((Var1.f_2 - fVar0) + 0.5f));
  return 1;
}