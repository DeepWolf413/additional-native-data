// agency_heist2.ysc @ L6818
void func_141()
{
  if (!PED::IS_PED_INJURED(iLocal_85))
  {
    if (!PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 60f))
    {
      if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, 242628503) != 1)
      {
        TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
        TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
        TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
        TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
        TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
        TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_97);
        TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
      }
    }
    else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, 242628503) != 1)
    {
      if (!PED::IS_PED_INJURED(iLocal_85))
      {
        TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
      }
    }
  }
}