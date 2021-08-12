// am_contact_requests.ysc @ L57887
int func_851(int iParam0, bool bParam1, var uParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  char* sVar4;
  char* sVar5;
  
  iVar2 = FILES::GET_NUM_DLC_VEHICLES();
  iVar0 = 0;
  while (iVar0 < iVar2)
  {
    iVar3 = FILES::GET_DLC_VEHICLE_MODEL(iVar0);
    if (func_826(iVar0, iVar3, iParam0))
    {
      sVar4 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar3);
      sVar5 = func_853(iVar3, iVar0);
      func_852(iVar0, sVar4, sVar5, bParam1, *uParam2);
      *uParam2++;
      iVar1++;
    }
    iVar0++;
  }
  return iVar1;
}