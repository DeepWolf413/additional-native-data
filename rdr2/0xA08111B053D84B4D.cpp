// beat_treasure_hunter.ysc @ L1121
void func_21()
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_79[1 /*12*/].f_8))
  {
    MISC::_0xA08111B053D84B4D(Local_79[1 /*12*/].f_8);
    OBJECT::DELETE_OBJECT(&(Local_79[1 /*12*/].f_8));
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_79[0 /*12*/].f_8))
  {
    OBJECT::DELETE_OBJECT(&(Local_79[0 /*12*/].f_8));
  }
}