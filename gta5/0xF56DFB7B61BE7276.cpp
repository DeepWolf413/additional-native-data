// tennis.ysc @ L23268
int func_550(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, float fParam7, float fParam8, var uParam9)
{
  float fVar0;
  struct<3> Var1;
  struct<3> Var4;
  float fVar7;
  var uVar8;
  struct<3> Var9;
  
  fVar0 = 0f;
  MISC::_0xF56DFB7B61BE7276(*uParam1, *uParam2, uParam0->f_37, uParam0->f_40, &fVar0);
  if (fVar0 < 0f || fVar0 > 1f)
  {
    return 0;
  }
  Var1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
  Var4 = { Var1 - uParam0->f_37 };
  fVar7 = func_205(Var4, uParam0->f_43);
  if (MISC::ABSF(fVar7) < 2.85f)
  {
    return 0;
  }
  uVar8 = Var4.f_2;
  Var9 = { fVar7, 0f, uVar8 };
  *fParam7 = MISC::_0x7F8F6405F4777AF6(Var9, *uParam5, *uParam3, false);
  *fParam8 = MISC::_0x7F8F6405F4777AF6(Var9, func_501(bParam6, *uParam5, *uParam4), func_501(bParam6, *uParam4, *uParam5), false);
  if (((*fParam7 < 0f || *fParam7 > 2f) || *fParam8 < 0f) || *fParam8 > 2f)
  {
    return 0;
  }
  *uParam9 = { Var1 };
  return 2;
}