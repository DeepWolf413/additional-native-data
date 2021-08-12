// abigail21_outro.ysc @ L152
void func_4(var uParam0)
{
  if (!func_16(uParam0, 4))
  {
    if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
    {
      MISC::SET_BIT(&(Global_1956580.f_1), 5);
      func_18(uParam0, 4);
    }
  }
  else if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
  {
    MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
    func_17(uParam0, 4);
  }
}