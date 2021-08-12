// agency_heist3a.ysc @ L141433
void func_1170()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (iLocal_4959 - 1))
  {
    if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_4959[iVar0]))
    {
      OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_4959[iVar0]);
    }
    iVar0++;
  }
}