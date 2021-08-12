// beat_del_lobo_posse.ysc @ L10120
void func_216()
{
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[0], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
  {
    TASK::STOP_ANIM_TASK(uLocal_372[0], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
  }
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[1], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
  {
    TASK::STOP_ANIM_TASK(uLocal_372[1], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
  }
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[2], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
  {
    TASK::STOP_ANIM_TASK(uLocal_372[2], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
  }
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[3], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
  {
    TASK::STOP_ANIM_TASK(uLocal_372[3], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
  }
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[4], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
  {
    TASK::STOP_ANIM_TASK(uLocal_372[4], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
  }
}