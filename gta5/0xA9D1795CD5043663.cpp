// agency_heist2.ysc @ L3412
float func_67(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
  struct<3> Var0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  Var0 = { Param3 - Param0 };
  fVar3 = Var0.f_2;
  fVar4 = SYSTEM::SQRT(((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)));
  fVar5 = ((((fParam6 * fParam6) * fParam6) * fParam6) - (fLocal_854 * ((fLocal_854 * (fVar4 * fVar4)) + ((2f * fVar3) * (fParam6 * fParam6)))));
  if (bParam7)
  {
    fVar6 = MISC::ATAN((((fParam6 * fParam6) - SYSTEM::SQRT(fVar5)) / (fLocal_854 * fVar4)));
  }
  else
  {
    fVar6 = MISC::ATAN((((fParam6 * fParam6) + SYSTEM::SQRT(fVar5)) / (fLocal_854 * fVar4)));
  }
  return fVar6;
}