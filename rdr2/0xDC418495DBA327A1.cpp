// beat_boat_attack.ysc @ L8908
void func_225()
{
  if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_536.f_1, "PBL_DEAD_LOOP"))
  {
    ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_536.f_1, "PBL_DEAD_LOOP", true);
  }
  if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_536.f_1, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_536.f_1, false))
  {
    ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_536.f_1, iLocal_407, 0);
    ANIMSCENE::START_ANIM_SCENE(Local_536.f_1);
  }
}