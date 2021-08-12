// exile3.ysc @ L54707
void func_501()
{
  int iVar0;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_871, false))
  {
    iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_871, iLocal_1288);
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_865[0], false))
    {
      if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_865[0], false))
      {
        PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_865[0], -1);
      }
      if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_865[0]))
      {
        VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_865[0]);
      }
      ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_865[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -6f, 3.7f), false, false, true);
      ENTITY::SET_ENTITY_ROTATION(iLocal_865[0], 0f, 0f, ENTITY::GET_ENTITY_HEADING(iVar0), 2, true);
      VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_865[0], true, true, false);
      VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_865[0], 38f);
      TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_865[0], 9, 100);
    }
  }
}