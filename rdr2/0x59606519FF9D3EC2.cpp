// abigail2_1.ysc @ L63823
void func_1727(var uParam0)
{
  if ((!func_776(uParam0, 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_804, false))
  {
    func_2099(uParam0);
    func_2100(uParam0, 0);
    if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_804, true))
    {
      ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_804);
    }
    func_744(uParam0, 32768);
  }
}