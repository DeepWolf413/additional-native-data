// appsettings.ysc @ L232
void func_2()
{
  func_7();
  if (func_4(0))
  {
    func_3();
  }
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
  {
    AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
  }
  if (bLocal_56)
  {
    HUD::CLEAR_HELP(true);
  }
  if (Global_112293.f_14049.f_83 == 0 || Global_112293.f_14049.f_82 == 0)
  {
    func_3();
  }
  MISC::SET_GAME_PAUSED(false);
  SCRIPT::TERMINATE_THIS_THREAD();
}