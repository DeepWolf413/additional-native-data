// guama2.ysc @ L51114
void func_1242()
{
  func_1725(-1, 1);
  func_1726(&(uLocal_176[11]));
  func_1726(&(uLocal_176[12]));
  func_1726(&(uLocal_176[13]));
  ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_176[11], "pl_group_ambush", true);
  ANIMSCENE::START_ANIM_SCENE(uLocal_176[11]);
  ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_176[12], "pl_guards_ambush", true);
  ANIMSCENE::START_ANIM_SCENE(uLocal_176[12]);
  ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_176[13], "pl_arthur_ambush", true);
  ANIMSCENE::START_ANIM_SCENE(uLocal_176[13]);
  PHYSICS::_0x0CB16D05E03FB525(uLocal_443[0]);
  PHYSICS::_0x9C24846D0A4A2776(uLocal_443[0]);
}