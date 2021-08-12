// ambush_gen_night_rob.ysc @ L8561
void func_289()
{
  int iVar0;

  func_187(&Local_15, 0);
  func_462(&Local_15, &Local_274);
  func_180(&(Local_274.f_152[1 /*3*/]));
  func_136(&(Local_274.f_150), Local_15[1], 0, 30f);
  TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_15[1], 7000, 0, 51, 0);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  if (PED::IS_PED_ON_MOUNT(Global_35))
  {
    TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
  }
  if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
  {
    TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
  }
  if (func_61(Local_15[1], 0, 0))
  {
    func_463(0, Local_15[1], 2000);
  }
  func_194(Global_35, &iVar0, 0, 0, 1, 1);
}