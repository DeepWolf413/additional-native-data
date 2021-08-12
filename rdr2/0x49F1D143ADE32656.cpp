// abigail2_1.ysc @ L66865
int func_1852(var uParam0)
{
  if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false))
  {
    return -1;
  }
  return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_804) * 1000f));
}