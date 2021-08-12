// agency_heist1.ysc @ L108005
int func_639(struct<3> Param0, int iParam3)
{
  int iVar0;
  int iVar1;
  float fVar2;
  
  fVar2 = 99999f;
  iVar0 = 0;
  while (iVar0 < (*iParam3 - 1))
  {
    if (MISC::GET_DISTANCE_BETWEEN_COORDS(MISC::_0x21C235BC64831E5A(Param0, *(iParam3[iVar0 /*3*/]), *(iParam3[iVar0 + 1 /*3*/]), true), Param0, true) < fVar2)
    {
      iVar1 = iVar0;
      fVar2 = SYSTEM::VDIST(MISC::_0x21C235BC64831E5A(Param0, *(iParam3[iVar0 /*3*/]), *(iParam3[iVar0 + 1 /*3*/]), true), Param0);
    }
    iVar0++;
  }
  return iVar1;
}