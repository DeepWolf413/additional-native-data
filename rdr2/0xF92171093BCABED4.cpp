// gang2.ysc @ L55248
void func_1366()
{
  vector3 vVar0;

  func_1374(1);
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_386))
  {
    iLocal_386 = OBJECT::CREATE_OBJECT(joaat("P_CS_ROPE04X"), Global_36 + Vector(50f, 0f, 0f), true, true, false, false, true);
  }
  ENTITY::SET_ENTITY_COLLISION(iLocal_386, false, false);
  ENTITY::SET_ENTITY_DYNAMIC(iLocal_386, false);
  vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_378[1], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_378[1], "chassis_dummy")) };
  Local_1012.f_1 = joaat("DEFAULT");
  Local_1012 = iLocal_1009;
  TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED(Global_35, sLocal_1005, &Local_1012, iLocal_378[1], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_378[1], "chassis_dummy"), vVar0, ENTITY::GET_ENTITY_ROTATION(iLocal_378[1], 2), 2, 0f, 0, 0, 17536, 0, 1);
  Local_1012 = iLocal_1010;
  TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED(iLocal_315[1], sLocal_1005, &Local_1012, iLocal_378[1], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_378[1], "chassis_dummy"), vVar0, ENTITY::GET_ENTITY_ROTATION(iLocal_378[1], 2), 2, 0f, 0, 0, 17536, 0, 1);
  Local_1012 = iLocal_1011;
  TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED(iLocal_386, sLocal_1005, &Local_1012, iLocal_378[1], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_378[1], "chassis_dummy"), vVar0, ENTITY::GET_ENTITY_ROTATION(iLocal_378[1], 2), 2, 0f, 0, 0, 17536, 0, 1);
}