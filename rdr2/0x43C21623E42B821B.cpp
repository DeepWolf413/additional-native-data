// ambush_inb_forest.ysc @ L3787
void func_139()
{
  int iVar0;

  if (Local_274.f_7 > 1)
  {
    iVar0 = func_301();
    if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_274.f_334[iVar0], false))
    {
      if (!func_230(Local_274.f_317[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) && CAM::IS_GAMEPLAY_CAM_RENDERING())
      {
        if (ANIMSCENE::_GET_ANIM_SCENE_RATE(Local_274.f_334[iVar0]) <= 1f)
        {
          ANIMSCENE::SET_ANIM_SCENE_RATE(Local_274.f_334[iVar0], 1.25f);
        }
      }
      else if (ANIMSCENE::_GET_ANIM_SCENE_RATE(Local_274.f_334[iVar0]) > 1f)
      {
        ANIMSCENE::SET_ANIM_SCENE_RATE(Local_274.f_334[iVar0], 1f);
      }
    }
  }
}