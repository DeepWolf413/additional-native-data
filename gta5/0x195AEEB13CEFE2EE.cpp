// fbi4_prep1.ysc @ L3879
void func_130(bool bParam0)
{
  if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_109, 0, false))
  {
    func_131(bParam0);
    if (iLocal_661 != (iLocal_81 - 1))
    {
      if (iLocal_661 == 4)
      {
        TASK::TASK_VEHICLE_GOTO_NAVMESH(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 2883755, Local_134[iLocal_661 /*25*/].f_6);
      }
      else
      {
        TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 0, 0, 2883755, Local_134[iLocal_661 /*25*/].f_6, Local_134[iLocal_661 /*25*/].f_7);
      }
      Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
      Local_111[0 /*11*/].f_7 = 4;
    }
    else
    {
      TASK::TASK_VEHICLE_DRIVE_WANDER(Local_111[0 /*11*/], iLocal_109, 15f, 786599);
      Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
      Local_111[0 /*11*/].f_7 = 10;
    }
  }
  else
  {
    Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
    Local_111[0 /*11*/].f_7 = 7;
  }
}