// agency_heist3a.ysc @ L107731
int func_629(int iParam0)
{
  int iVar0;
  
  if (func_630(&iVar0))
  {
    if (!PED::IS_PED_INJURED(*iParam0))
    {
      if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, iVar0))
      {
        return 1;
      }
    }
  }
  return 0;
}