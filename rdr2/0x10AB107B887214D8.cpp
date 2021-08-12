// ambush_exc_wagon_turret.ysc @ L9771
bool func_321()
{
  int iVar0;

  if (PED::IS_PED_IN_VEHICLE(Local_15[5], Local_15.f_49[0], true) || PED::IS_PED_IN_VEHICLE(Global_35, Local_15.f_49[0], true))
  {
    return false;
  }
  if (func_316())
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_ENTER_VEHICLE(0, Local_15.f_49[0], 20000, func_128(Local_15.f_49[0]), 2f, 1, 0);
    TASK::TASK_VEHICLE_SHOOT_AT_PED(0, Global_35, 20f);
    func_196(Local_15[5], &iVar0, 0, 0, 1, 1);
    return true;
  }
  return false;
}