// am_mp_submarine.ysc @ L452097
int func_7057(var uParam0, bool bParam1)
{
  float fVar0;
  struct<3> Var1;
  
  Var1 = { func_7058(uParam0) };
  if (bParam1)
  {
    WATER::GET_WATER_HEIGHT(Var1, &fVar0);
  }
  else
  {
    WATER::GET_WATER_HEIGHT_NO_WAVES(Var1, &fVar0);
  }
  if (Var1.f_2 > fVar0)
  {
    return 1;
  }
  return 0;
}