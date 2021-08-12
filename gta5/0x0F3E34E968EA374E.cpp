// fbi4_prep1.ysc @ L6170
void func_194(var uParam0)
{
  int iVar0;
  
  if (func_37(iLocal_109))
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
    TASK::TASK_VEHICLE_PARK(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, Local_134[iLocal_661 /*25*/].f_8, Local_134[iLocal_661 /*25*/].f_10, 5f, true);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
    uParam0->f_7 = 6;
  }
}