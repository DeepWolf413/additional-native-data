// armenian1.ysc @ L46147
float func_400(struct<3> Param0, int iParam3, char* sParam4, int iParam5)
{
  int iVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam3, sParam4);
  fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0);
  fVar2 = (fVar1 / 2f);
  fVar3 = (fVar1 / 2f);
  iVar4 = 0;
  while (iVar4 <= iParam5)
  {
    if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, func_401((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, func_401((fVar2 + fVar3), 0f, fVar1))))
    {
      fVar3 = (fVar3 / 2f);
      fVar2 = (fVar2 - fVar3);
    }
    if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, func_401((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, func_401((fVar2 + fVar3), 0f, fVar1))))
    {
      fVar3 = (fVar3 / 2f);
      fVar2 = (fVar2 + fVar3);
    }
    iVar4++;
  }
  return fVar2;
}