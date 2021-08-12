// am_challenges.ysc @ L10551
float func_309(int iParam0, float* fParam1)
{
  float fVar0;
  struct<3> Var1;
  var uVar4;
  
  Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
  MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, fParam1, true, false);
  MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar4, false, false);
  if (STATS::_0xF9F2922717B819EC())
  {
    func_545(3);
    MISC::SET_BIT(&iLocal_319, 10);
    func_27(&uLocal_315, 0, 0);
  }
  else if (MISC::IS_BIT_SET(iLocal_319, 10))
  {
    if (func_1(&uLocal_315, 2000, 0))
    {
      MISC::CLEAR_BIT(&iLocal_319, 10);
    }
  }
  if (*fParam1 < 0f)
  {
    *fParam1 = 0f;
  }
  fVar0 = (Var1.f_2 - *fParam1);
  if (fVar0 < 0f)
  {
    fVar0 = (fVar0 * -1f);
  }
  return fVar0;
}