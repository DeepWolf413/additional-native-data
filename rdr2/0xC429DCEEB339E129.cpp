// grays1.ysc @ L54273
bool func_1287(int iParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = 0;
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
    if (func_910(iVar1, 0) && TASK::GET_SCRIPT_TASK_STATUS(iVar1, -2118855366, true) == 1)
    {
      if (iVar1 != Global_35)
      {
        TASK::CLEAR_PED_TASKS(iVar1, true, false);
      }
      TASK::TASK_VEHICLE_TEMP_ACTION(iVar1, iParam0, 24, -1);
    }
    if (ENTITY::GET_ENTITY_SPEED(iParam0) <= 0.15f)
    {
      func_1850(iParam0, 0.75f);
      iVar0 = 1;
    }
  }
  return iVar0;
}