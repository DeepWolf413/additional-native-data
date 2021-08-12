// guama2.ysc @ L65688
void func_1693(bool bParam0)
{
  if (bParam0)
  {
    if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_176[5], false))
    {
      ANIMSCENE::SET_ANIM_SCENE_PAUSED(uLocal_176[5], true);
    }
  }
  else if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uLocal_176[5]))
  {
    func_1655(&(uLocal_176[5]), "ARTHUR", &Global_35);
    func_1655(&(uLocal_176[5]), "Dutch", &(uLocal_476[2]));
    func_1655(&(uLocal_176[5]), "LeviSimon", &(Local_14.f_44[0]));
    ANIMSCENE::SET_ANIM_SCENE_PAUSED(uLocal_176[5], false);
  }
}