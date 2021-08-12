// am_ferriswheel.ysc @ L7822
void func_191()
{
  func_197();
  func_195(0);
  func_80(&uLocal_395, 0);
  func_80(&uLocal_324, 0);
  func_79(&Local_325, 0, 1);
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
  {
    AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
  }
  MISC::CLEAR_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873), 14);
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (MISC::IS_BIT_SET(Local_1406[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0) || func_179())
    {
      if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
      {
        ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
      }
      if (MISC::IS_BIT_SET(Local_1406[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
      {
        TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
      }
    }
    func_45(0);
  }
  func_41();
  func_192(&uLocal_51);
  func_192(&uLocal_169);
  BRAIN::_0x6D6840CEE8845831("fairgroundHub");
  SCRIPT::TERMINATE_THIS_THREAD();
}