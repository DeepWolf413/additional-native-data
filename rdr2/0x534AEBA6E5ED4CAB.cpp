// braithwaites2_intro.ysc @ L4262
void func_169()
{
  if (func_166(Global_35, iLocal_53, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
  {
    func_343(1, 2f, 3, 1056964608 /* Float: 0.5f */);
  }
  else if ((ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_53, true, 0) && !PED::IS_PED_IN_VEHICLE(Global_35, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != 4)
  {
    if (ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 35f || ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 330f)
    {
      TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1010.9f, -1740.62f, 45.58f, 2f, 0, 0, 8.5f, 8.5f);
    }
    else if (ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 330f && ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 220f)
    {
      TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1027.09f, -1751.24f, 45.49f, 2f, 0, 0, 8.5f, 8.5f);
    }
    else if (ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 210f && ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 150f)
    {
      TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1010.9f, -1740.62f, 45.58f, 2f, 2, 0, 8.5f, 8.5f);
    }
    else if (ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 150f && ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 35f)
    {
      TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 993.71f, -1748.09f, 45.66f, 2f, 0, 0, 8.5f, 8.5f);
    }
  }
  else if ((TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(PLAYER::GET_PLAYERS_LAST_VEHICLE()) == 4 && !ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_53, true, 0)) && !PED::IS_PED_IN_VEHICLE(Global_35, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
  {
    VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1f, 1, false);
  }
}