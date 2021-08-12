// am_contact_requests.ysc @ L57052
int func_825(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar0 = 0;
  while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
  {
    iVar2 = FILES::GET_DLC_VEHICLE_MODEL(iVar0);
    if (func_826(iVar0, iVar2, iParam0))
    {
      iVar1++;
    }
    iVar0++;
  }
  return iVar1;
}