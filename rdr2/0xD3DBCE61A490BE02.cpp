// ambush_exc_wagon_turret.ysc @ L9751
bool func_320()
{
  int iVar0;

  if (!PED::IS_PED_IN_VEHICLE(Local_15[5], Local_15.f_49[0], true))
  {
    return false;
  }
  if (!func_316())
  {
    func_126(Local_15[5], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_LEAVE_VEHICLE(0, Local_15.f_49[0], 268501120, 0);
    TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
    func_196(Local_15[5], &iVar0, 0, 0, 1, 1);
    return true;
  }
  return false;
}