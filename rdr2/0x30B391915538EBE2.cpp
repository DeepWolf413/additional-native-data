// native2.ysc @ L56476
void func_1322()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (func_956(iLocal_195[iVar0], 0))
    {
      TASK::_0x30B391915538EBE2(iLocal_195[iVar0]);
      TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_195[iVar0], Local_562[iVar0 /*6*/], 0, 157192, -1, 0, 0, -1);
      PED::SET_PED_KEEP_TASK(iLocal_195[iVar0], true);
      func_1870(Local_281[2 /*2*/], iLocal_195[iVar0]);
    }
    iVar0++;
  }
}