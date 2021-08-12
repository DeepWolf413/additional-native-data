// act_fishing01.ysc @ L22766
void func_623(bool bParam0)
{
  vector3 vVar0;
  float fVar3;
  vector3 vVar4;

  if (!func_75(Local_195.f_95, 4096))
  {
    vVar0 = { func_532(3, 7) };
    fVar3 = func_558(3, 7);
    vVar4 = { func_532(3, 6) };
    TASK::OPEN_SEQUENCE_TASK(&iLocal_1564);
    if (!func_539(Local_195.f_37))
    {
      TASK::TASK_MOUNT_ANIMAL(0, iLocal_28, -1, -1, (1f + 0.25f), 1, 0, 0);
    }
    if (bParam0)
    {
      TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_136, 0, 25708, -1, 0, 0, -1);
    }
    TASK::_TASK_MOVE_IN_TRAFFIC_4(0, 1.501f, vVar4, 0);
    TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, (1f + 0.5f), -1, 5f, 0, fVar3);
    TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar0, 3f, 0, false, false, false, false);
    TASK::CLOSE_SEQUENCE_TASK(iLocal_1564);
    TASK::TASK_PERFORM_SEQUENCE(Local_195.f_37, iLocal_1564);
    TASK::CLEAR_SEQUENCE_TASK(&iLocal_1564);
    PED::SET_PED_KEEP_TASK(Local_195.f_37, true);
    func_221(&(Local_195.f_95), 4096);
  }
}