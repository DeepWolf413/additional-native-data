// exile1.ysc @ L121871
void func_867()
{
  int iVar0;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_525[2], false))
  {
    VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_525[2], 2, true);
  }
  func_301(5);
  func_535();
  func_131(0, 0);
  func_300();
  iVar0 = 0;
  while (iVar0 < Local_282)
  {
    if (!PED::IS_PED_INJURED(Local_282[iVar0 /*17*/]))
    {
      TASK::TASK_AIM_GUN_AT_COORD(Local_282[iVar0 /*17*/], 2930.5f, 810.5f, 449.1f, -1, true, false);
    }
    iVar0++;
  }
  bLocal_781 = true;
}