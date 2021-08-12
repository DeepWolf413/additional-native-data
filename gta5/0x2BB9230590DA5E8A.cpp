// agency_heist1.ysc @ L101811
int func_538(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar0 = 0;
  while (iVar0 < 68)
  {
    if ((ENTITY::DOES_ENTITY_EXIST(Global_76066.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_76066.f_484[iVar0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_76066.f_484[iVar0], false))
    {
      VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
      VEHICLE::GET_VEHICLE_COLOURS(Global_76066.f_484[iVar0], &iVar3, &iVar4);
      if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_76066.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_76066.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
      {
        return iVar0;
      }
    }
    iVar0++;
  }
  return -1;
}