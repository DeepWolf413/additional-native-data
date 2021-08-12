// agency_heist1.ysc @ L110190
float func_688(struct<3> Param0)
{
  int iVar0;
  float fVar1;
  
  iVar0 = func_639(Param0, &Local_1087);
  if (iVar0 >= 0 && iVar0 < Local_1087.x)
  {
    fVar1 = SYSTEM::TO_FLOAT(iVar0);
    if (iVar0 < (Local_1087.x - 1))
    {
      fVar1 = (fVar1 + MISC::_0x7F8F6405F4777AF6(Param0, Local_1087[iVar0 /*3*/], Local_1087[iVar0 + 1 /*3*/], true));
    }
    return fVar1;
  }
  return -1f;
}