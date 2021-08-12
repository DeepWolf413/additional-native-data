// abigail1.ysc @ L38760
int func_279(struct<3> Param0, int iParam3, int iParam4)
{
  int iVar0;
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = 1000000f;
  iVar3 = 10;
  iVar0 = 0;
  while (iVar0 <= (10 - 1))
  {
    if (Global_94408[iVar0 /*10*/].f_7 != 263)
    {
      if (Global_94408[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
      {
        if (func_280(iVar0) || iParam4 == 0)
        {
          fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_94408[iVar0 /*10*/].f_3, true);
          if (fVar1 < fVar2)
          {
            fVar2 = fVar1;
            iVar3 = iVar0;
          }
        }
      }
    }
    iVar0++;
  }
  return iVar3;
}