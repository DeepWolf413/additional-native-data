// fm_mission_controller_2020.ysc @ L416005
void func_6736(var uParam0)
{
  int iVar0;
  int iVar1;
  
  if (!uParam0->f_2)
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_9, true);
    if (uParam0->f_3)
    {
      iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_9, 355471868);
      iVar1 = func_3533(uParam0->f_11, 1, 0, 1, -3);
      if (((VEHICLE::IS_TURRET_SEAT(uParam0->f_11, iVar1) && VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_11, iVar1, true)) && !VEHICLE::IS_TURRET_SEAT(uParam0->f_11, func_2709(uParam0->f_9, 1))) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_11, iVar1, false) != uParam0->f_9)
      {
        if (iVar0 != 0 && iVar0 != 1)
        {
          TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_9);
          TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_9, uParam0->f_11, 1);
          func_337(&iLocal_12198, uParam0->f_8);
        }
      }
    }
  }
}