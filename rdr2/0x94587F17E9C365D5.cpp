// beat_checkpoint.ysc @ L2708
void func_58()
{
  int iVar0;

  TASK::OPEN_SEQUENCE_TASK(&iLocal_1351);
  TASK::TASK_SMART_FLEE_COORD(0, Local_351.f_51, 15f, 3000, false, 1077936128);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_1351);
  iVar0 = 4;
  while (iVar0 <= 6)
  {
    if (func_137(uLocal_810[iVar0], 0, 1) && PED::_IS_MOUNT_SEAT_FREE(uLocal_810[iVar0], -1))
    {
      if (!PED::IS_PED_FLEEING(uLocal_810[iVar0]))
      {
        TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_810[iVar0], iLocal_1351, 0.2f, 0.8f);
      }
    }
    iVar0++;
  }
  TASK::CLEAR_SEQUENCE_TASK(&iLocal_1351);
}