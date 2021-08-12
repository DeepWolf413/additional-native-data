// es_clean_stalls.ysc @ L4607
void func_217(int iParam0)
{
  if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1899848.f_219, false))
  {
    ANIMSCENE::ABORT_ANIM_SCENE(Global_1899848.f_219, false);
    ANIMSCENE::_DELETE_ANIM_SCENE(Global_1899848.f_219);
    iParam0->f_28 = 0;
  }
}