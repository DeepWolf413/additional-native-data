// agency_heist1.ysc @ L111286
float func_701(struct<3> Param0, struct<3> Param3)
{
  float fVar0;
  
  Param0 = { func_702(Param0) };
  Param3 = { func_702(Param3) };
  fVar0 = (MISC::ATAN2(Param3.f_1, Param3.x) - MISC::ATAN2(Param0.f_1, Param0.x));
  if (fVar0 > 180f)
  {
    fVar0 = (fVar0 - 360f);
  }
  else if (fVar0 < -180f)
  {
    fVar0 = (fVar0 + 360f);
  }
  return fVar0;
}