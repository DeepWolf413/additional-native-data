// abigail2.ysc @ L38325
int func_339(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)
{
  bool bVar0;
  float fVar1;
  
  bVar0 = false;
  if (func_464(iParam0))
  {
    if (bParam5 == 1)
    {
      fVar1 = 0f;
      bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1, false, false);
      if (bVar0)
      {
        Param1.f_2 = fVar1;
      }
    }
    ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, bParam6);
    ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
    if (bParam5)
    {
      return bVar0;
    }
    return 1;
  }
  return 0;
}