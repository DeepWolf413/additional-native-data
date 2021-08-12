// sean1.ysc @ L70786
void func_1608(char[4] cParam0)
{
  Local_3076 = OBJECT::CREATE_OBJECT(Local_3076.f_2, Local_3076.f_3, true, true, false, false, true);
  OBJECT::SET_OBJECT_TARGETTABLE(Local_3076, true);
  ENTITY::_0x4B436BAC8CBE9B07(Local_3076, 0, 0);
  Local_3076.f_20 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Local_3076));
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3076, true);
  func_415(cParam0, Local_3076, "p_cs_rope02x", 0, 0, 0, 0);
  Local_3100 = OBJECT::CREATE_OBJECT(Local_3100.f_2, Local_3100.f_3, true, true, false, false, true);
  func_415(cParam0, Local_3100, "p_cs_ropelegsplit", 0, 0, 0, 0);
  ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_3405, "pl_base", true);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_3405, "sean", Local_31[3 /*58*/], 0);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_3405, "p_cs_rope02x", Local_3076, 0);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_3405, "p_cs_ropelegsplit", Local_3100, 0);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_3405, "ARTHUR", PLAYER::PLAYER_PED_ID(), 0);
  ANIMSCENE::START_ANIM_SCENE(iLocal_3405);
  ENTITY::_0xAF7F3099B9FEB535(Local_31[3 /*58*/], 0f, 0f, 1f);
  func_1553(8, -1668922931, 1);
  Local_3076.f_20 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Local_3076));
}