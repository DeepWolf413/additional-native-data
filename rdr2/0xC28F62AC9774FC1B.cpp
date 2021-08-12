// winter2_outro.ysc @ L485
int func_24(var uParam0)
{
  int iVar0;

  HUD::_HIDE_HUD_COMPONENT(-1679307491);
  if (func_21(&uLocal_5) && func_23(&uLocal_5) >= 1f)
  {
    if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_4, true, false))
    {
      TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
      WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
      TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
      WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
      ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_4, "player_zero", Global_35, 0);
      ANIMSCENE::START_ANIM_SCENE(iLocal_4);
      iVar0 = 4;
      func_56(&iVar0, 0, 2, 0, 0, 0, 0);
      if (GRAPHICS::_0xC28F62AC9774FC1B())
      {
        func_57(&iLocal_3, 16);
      }
      else
      {
        func_58(&iLocal_3, 16);
      }
      GRAPHICS::_0xEB48CE48EEC41FD4(false);
      return 1;
    }
  }
  return 0;
}