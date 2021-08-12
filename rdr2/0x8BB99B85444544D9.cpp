// beat_dark_alley_stabber.ysc @ L1261
void func_22()
{
  Local_357 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_357.f_4, 64, "PBL_EXIT_LEFT", false, true);
  ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_357, Local_163.f_51, 0f, 0f, Local_163.f_51.f_3, 2);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_357, "PED_STABBER", uLocal_798[0], 0);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_357, "PED_VICTIM", uLocal_798[1], 0);
  Local_150[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_150[0 /*12*/].f_7, Local_163.f_51, true, true, false, false, true);
  ENTITY::SET_ENTITY_VISIBLE(Local_150[0 /*12*/].f_8, false);
  ENTITY::SET_ENTITY_COLLISION(Local_150[0 /*12*/].f_8, false, false);
  MISC::_0x8BB99B85444544D9(Local_150[0 /*12*/].f_8, 1000);
  Local_357.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_357.f_7, 0, 0, false, true);
  ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_357.f_3, Local_163.f_51, 0f, 0f, Local_163.f_51.f_3, 2);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_357.f_3, "Victim", uLocal_798[1], 0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_357.f_4))
  {
    if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_357, true, false))
    {
      ANIMSCENE::LOAD_ANIM_SCENE(Local_357);
    }
  }
  if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_357.f_7))
  {
    if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_357.f_3, true, false))
    {
      ANIMSCENE::LOAD_ANIM_SCENE(Local_357.f_3);
    }
  }
  ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_357, "ACTION", false, false);
}