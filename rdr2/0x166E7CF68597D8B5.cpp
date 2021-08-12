// beat_torturing_captive.ysc @ L2046
void func_49()
{
  Local_105.f_178 = 1;
  FIRE::STOP_ENTITY_FIRE(uLocal_46[2], 0);
  FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uLocal_46[2], true, false), 30f);
  ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_46[3], Local_324[3 /*32*/].f_6, Local_324[3 /*32*/].f_9, false, false, true);
  ENTITY::SET_ENTITY_COORDS(Local_299[0 /*12*/].f_8, vLocal_39, true, false, true, true);
  ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_299[1 /*12*/].f_8, vLocal_42, (Local_324[2 /*32*/].f_9 - 90f), true, false, true);
  uLocal_61[0] = GRAPHICS::_0xFA50F79257745E74(vLocal_23[0 /*3*/], 10f, 1, 4, 0);
  uLocal_61[1] = GRAPHICS::_0xFA50F79257745E74(vLocal_23[1 /*3*/], 5f, 1, 3, 0);
  uLocal_61[2] = GRAPHICS::_0xFA50F79257745E74(vLocal_23[2 /*3*/], 5f, 1, 60, 0);
  PED::_0xAE6004120C18DF97(uLocal_46[2], 0, 0);
  PED::ADD_RELATIONSHIP_GROUP("INBRED", &iLocal_65);
  PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("PLAYER"), iLocal_65);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_46[0], joaat("REL_PLAYER_DISLIKE"));
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_46[1], joaat("REL_PLAYER_DISLIKE"));
  PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_46[2], 827601);
  ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_46[2], Local_299[1 /*12*/].f_8, false);
  ENTITY::SET_ENTITY_MAX_HEALTH(uLocal_46[2], 1000);
  ENTITY::_SET_ENTITY_HEALTH(uLocal_46[2], 1000, 0);
  func_154(uLocal_46[2], 0);
  func_154(uLocal_46[0], 0);
  func_154(uLocal_46[1], 0);
}