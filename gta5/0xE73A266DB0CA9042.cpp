// chinese1.ysc @ L101657
void func_548(int iParam0, struct<3> Param1, int iParam4)
{
  int iVar0;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1307, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_PAUSE(0, iParam4);
    TASK::TASK_LEAVE_VEHICLE(0, Local_1307, 0);
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 1f, 20000, 0.25f, false, 40000f);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  }
}