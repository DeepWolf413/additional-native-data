// hideout_fortmercer.ysc @ L1982
void func_64()
{
  ENTITY::_0x9587913B9E772D29(Local_472[0 /*14*/].f_9, 0);
  ENTITY::SET_ENTITY_HEADING(Local_472[0 /*14*/].f_9, 311.8031f);
  if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Local_472[0 /*14*/].f_9))
  {
    ENTITY::_0x445D7D8EA66E373E(Local_472[0 /*14*/].f_9, 0, ENTITY::GET_ENTITY_COORDS(Local_472[0 /*14*/].f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
  }
  ENTITY::_0x9587913B9E772D29(Local_472[1 /*14*/].f_9, 0);
  ENTITY::SET_ENTITY_HEADING(Local_472[1 /*14*/].f_9, 360.08f);
  if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Local_472[1 /*14*/].f_9))
  {
    ENTITY::_0x445D7D8EA66E373E(Local_472[1 /*14*/].f_9, 0, ENTITY::GET_ENTITY_COORDS(Local_472[1 /*14*/].f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
  }
}