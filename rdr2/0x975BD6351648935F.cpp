// winter1.ysc @ L27616
bool func_495(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
  float fVar0;
  struct<10> Var1;

  if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &fVar0, false) || bParam9)
  {
    if (fVar0 != 0f)
    {
      vParam1.f_2 = fVar0;
    }
    Var1 = { vParam1 };
    Var1.f_3 = fParam4;
    Var1.f_4 = iParam5;
    Var1.f_5 = iParam6;
    Var1.f_6 = iParam7;
    Var1.f_7 = iParam8;
    Var1.f_9 = iParam10;
    *iParam0 = AICOVERPOINT::_ADD_SCRIPTED_COVER_POINT(&Var1);
    return true;
  }
  return false;
}