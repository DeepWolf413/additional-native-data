// am_taxi.ysc @ L13396
int func_319(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
  float fVar0;
  
  fVar0 = SYSTEM::VDIST2(Param0, Param3);
  if (fVar0 >= (fParam6 * fParam6))
  {
    return 0;
  }
  if (fVar0 <= (fParam7 * fParam7))
  {
    return 0;
  }
  if (CAM::IS_SPHERE_VISIBLE(Param3, 2.5f))
  {
    return 0;
  }
  if (MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Param3, 3f, 3f, 3f, 0))
  {
    return 0;
  }
  if (func_320(Param3, 0))
  {
    return 0;
  }
  return 1;
}