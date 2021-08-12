// am_contact_requests.ysc @ L56779
char* func_802(int iParam0)
{
  int iVar0;
  bool bVar1;
  
  iVar0 = VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(iParam0);
  bVar1 = func_28();
  switch (iVar0)
  {
    case 14:
      return func_803(bVar1, "MPCT_13", "MPCT_14");
    
    case 16:
    case 15:
      return func_803(bVar1, "MPCT_15", "MPCT_16");
    
    default:
  }
  return func_803(bVar1, "MPCT_17", "MPCT_18");
  return func_803(bVar1, "MPCT_17", "MPCT_18");
}