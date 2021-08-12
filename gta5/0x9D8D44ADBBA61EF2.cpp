// mission_repeat_controller.ysc @ L248
void func_5(int iParam0)
{
  Global_112293.f_9083 = 1;
  Global_42558 = 0;
  MISC::SET_GAME_PAUSED(false);
  if (iParam0 == 1)
  {
    CAM::DO_SCREEN_FADE_IN(800);
  }
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
  }
  MISC::CLEAR_BIT(&Global_77496, 0);
  MISC::CLEAR_BIT(&Global_77496, 1);
  MISC::CLEAR_BIT(&Global_77496, 3);
  MISC::CLEAR_BIT(&Global_77496, 2);
  MISC::_SET_PLAYER_ROCKSTAR_EDITOR_DISABLED(false);
  SCRIPT::TERMINATE_THIS_THREAD();
}