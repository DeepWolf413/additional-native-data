// abigail2_1.ysc @ L50477
float func_1302(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
  float fVar0;
  float fVar1;
  float fVar2;

  fVar1 = (Param3 - Param0);
  fVar2 = (Param3.f_1 - Param0.f_1);
  if (fVar2 != 0f)
  {
    fVar0 = MISC::ATAN2(fVar1, fVar2);
  }
  else if (fVar1 < 0f)
  {
    fVar0 = -90f;
  }
  else
  {
    fVar0 = 90f;
  }
  if (iParam6 == 1)
  {
    fVar0 = (fVar0 * -1f);
    if (fVar0 < 0f)
    {
      fVar0 = (fVar0 + 360f);
    }
  }
  return fVar0;
}