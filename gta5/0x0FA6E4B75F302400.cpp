// minute2.ysc @ L47045
void func_442()
{
  if (iLocal_840 == 0)
  {
    TASK::OPEN_SEQUENCE_TASK(&iLocal_199);
    if (func_5(iLocal_157[iLocal_574]))
    {
      TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_157[iLocal_574], "Min2_Bike02", 786468, 28, 0, -1, -1f, false, 2f);
      TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_157[iLocal_574], Local_646[44 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
      TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_157[iLocal_574], Local_646[45 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
      TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_157[iLocal_574], Local_646[46 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
      TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_157[iLocal_574], 24f, 786468);
    }
    TASK::CLOSE_SEQUENCE_TASK(iLocal_199);
    TASK::OPEN_SEQUENCE_TASK(&iLocal_203);
    TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
    if (func_5(iLocal_162))
    {
      if (func_5(iLocal_157[iLocal_574]))
      {
        TASK::TASK_VEHICLE_ESCORT(0, iLocal_162, iLocal_157[iLocal_574], -1, 40f, 262144, fLocal_573, 20, 20f);
      }
    }
    TASK::CLOSE_SEQUENCE_TASK(iLocal_203);
    iLocal_840 = 1;
  }
}