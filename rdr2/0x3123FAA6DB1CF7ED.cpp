// ambush_exc_wagon_turret.ysc @ L9113
void func_292()
{
  char* sVar0;
  char* sVar1;
  int iVar2;

  func_417();
  sVar0 = func_189(&Local_274);
  sVar1 = func_190(&Local_274);
  iVar2 = 776;
  if (func_61(Local_15[4], 0, 1) && (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0])))
  {
    if (func_145(&(Local_274.f_5), 256))
    {
      TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_15[4], Local_15.f_49[0], sVar1, 0, 0, iVar2, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
    }
    else
    {
      TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_15[4], Local_15.f_49[0], sVar0, 0, 0, iVar2, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
    }
    func_418(Local_15.f_49[0], Global_35, 10);
  }
  func_314(0);
}