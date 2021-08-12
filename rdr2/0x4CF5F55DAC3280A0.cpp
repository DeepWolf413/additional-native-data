// beat_posse_breakout.ysc @ L6195
void func_193()
{
  int iVar0;

  if (func_62(iLocal_1041[1], 0, 1))
  {
    if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[1], 1435919172, true) != 1 && iLocal_1128[1])
    {
      TASK::OPEN_SEQUENCE_TASK(&iVar0);
      TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vLocal_1150, 3000, 0, 0f, 0, 0, iLocal_1176, 0, 0, 0);
      TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, vLocal_1001, 100f, 0, 16);
      func_197(iLocal_1041[1], &iVar0, 0, 0, 1, 1);
    }
  }
}