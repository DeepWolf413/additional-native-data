// abigail2.ysc @ L36384
float func_283(struct<3> Param0, struct<3> Param3)
{
  return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_284(struct<3> Param0)
{
  float fVar0;
  float fVar1;
  
  fVar0 = SYSTEM::VMAG(Param0);
  if (fVar0 != 0f)
  {
    fVar1 = (1f / fVar0);
    Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
  }
  else
  {
    Param0.x = 0f;
    Param0.f_1 = 0f;
    Param0.f_2 = 0f;
  }
  return Param0;
}