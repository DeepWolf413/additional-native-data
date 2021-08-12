// agency_heist3a.ysc @ L128671
void func_951()
{
  AUDIO::STOP_STREAM();
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_5084[0]);
  ENTITY::SET_ENTITY_COORDS(iLocal_5084[0], 122.058f, -727.0389f, 253.1523f, true, false, false, true);
  ENTITY::SET_ENTITY_HEADING(iLocal_5084[0], 157.1273f);
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1019[0 /*32*/]);
  ENTITY::SET_ENTITY_COORDS(Local_1019[0 /*32*/], 120.0677f, -727.0218f, 253.1523f, true, false, false, true);
  ENTITY::SET_ENTITY_HEADING(Local_1019[0 /*32*/], 156.6606f);
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1019[1 /*32*/]);
  ENTITY::SET_ENTITY_COORDS(Local_1019[1 /*32*/], 122.3925f, -725.9218f, 253.1523f, true, false, false, true);
  ENTITY::SET_ENTITY_HEADING(Local_1019[1 /*32*/], 164.1283f);
  iLocal_7196[0] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT3_01.xml");
  iLocal_7196[1] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT3_02.xml");
  iLocal_7196[2] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT3_03.xml");
  iLocal_7196[3] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT2_01.xml");
  iLocal_7196[4] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT2_02.xml");
  iLocal_7196[5] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT2_04.xml");
  iLocal_4689 = 1;
  iLocal_4791 = MISC::GET_GAME_TIMER();
  iLocal_4792 = 5000;
  if (CAM::IS_SCREEN_FADED_IN())
  {
    func_869(0, 0, 0, 0, 0, 3000, 1, 1);
  }
  else
  {
    func_116(0, 0, 0, 0, 1, 1);
  }
}