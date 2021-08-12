// beat_player_camp_stranger.ysc @ L1678
void func_45()
{
  iLocal_621 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP"), 5f, 0, false);
  vLocal_67 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_621, true) };
  vLocal_58 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_67, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_621, true), -6f, 0f, 0f) };
  vLocal_61 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_67, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_621, true), 6f, 0f, 0f) };
}