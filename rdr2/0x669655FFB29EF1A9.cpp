// camp_beechershope.ysc @ L34898
void func_1102()
{
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_3795, "PLAYER", Global_35, 0);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_3795, "BARTENDER", func_1046(13), 0);
  if (!ENTITY::DOES_ENTITY_EXIST(Local_3808[0 /*4*/]))
  {
    Local_3808[0 /*4*/] = OBJECT::CREATE_OBJECT(Local_3808[0 /*4*/].f_2, func_1105(), true, true, false, false, true);
    ENTITY::SET_ENTITY_VISIBLE(Local_3808[0 /*4*/], false);
    ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_3808[0 /*4*/], false);
  }
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_3795, Local_3808[0 /*4*/].f_1, Local_3808[0 /*4*/], 0);
  if (!ENTITY::DOES_ENTITY_EXIST(Local_3808[1 /*4*/]))
  {
    Local_3808[1 /*4*/] = OBJECT::CREATE_OBJECT(Local_3808[1 /*4*/].f_2, func_1105(), true, true, false, false, true);
    ENTITY::SET_ENTITY_VISIBLE(Local_3808[1 /*4*/], false);
    ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_3808[1 /*4*/], false);
    ENTITY::_0x669655FFB29EF1A9(Local_3808[1 /*4*/], 0, "Stew_Fill", 1f);
  }
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_3795, Local_3808[1 /*4*/].f_1, Local_3808[1 /*4*/], 0);
  iLocal_3793 = 1;
}