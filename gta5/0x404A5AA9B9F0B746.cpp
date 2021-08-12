// minute3.ysc @ L37171
void func_301()
{
  int iVar0;
  
  if (func_41(iLocal_300) && func_590(Local_203))
  {
    if (func_291(Local_203, -235832601) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_315))
    {
      if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_315, ENTITY::GET_ENTITY_COORDS(iLocal_300, true), &iVar0))
      {
        if ((iVar0 > iLocal_316 && iLocal_511) && !iLocal_513)
        {
          if (((!TASK::GET_SCRIPT_TASK_STATUS(Local_203, -1273030092) == 1 && !TASK::GET_SCRIPT_TASK_STATUS(Local_203, -828834893) == 1) && !PED::IS_PED_FLEEING(Local_203)) && !TASK::GET_SCRIPT_TASK_STATUS(Local_203, 242628503) == 1)
          {
            TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_203, 15f);
            TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_203, iLocal_300, PLAYER::PLAYER_PED_ID(), 8, 15f, 786468, 100f, 1f, true);
            iLocal_511 = 0;
          }
        }
      }
    }
  }
}