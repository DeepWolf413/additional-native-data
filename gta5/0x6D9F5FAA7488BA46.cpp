// assassin_multi.ysc @ L11501
var func_249(bool bParam0, struct<3> Param1, float fParam4)
{
  int iVar0;
  float fVar1;
  float fVar2;
  var uVar3;
  
  fVar1 = fParam4;
  iVar0 = 0;
  while (iVar0 <= 1)
  {
    if (!PED::IS_PED_INJURED(Local_2204[iVar0 /*9*/]))
    {
      if ((bParam0 && PED::IS_PED_MALE(Local_2204[iVar0 /*9*/])) || (!bParam0 && !PED::IS_PED_MALE(Local_2204[iVar0 /*9*/])))
      {
        fVar2 = func_250(Local_2204[iVar0 /*9*/], Param1, 1);
        if (fVar2 <= fVar1)
        {
          uVar3 = Local_2204[iVar0 /*9*/];
          fVar1 = fVar2;
        }
      }
    }
    iVar0++;
  }
  return uVar3;
}