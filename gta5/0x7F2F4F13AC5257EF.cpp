// ob_franklin_tv.ysc @ L888
void func_9()
{
  if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
  {
    PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
  }
  iLocal_319 = PED::CREATE_SYNCHRONIZED_SCENE(Local_323, Local_326, 2);
  TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_319, sLocal_322, "exit", 8f, -8f, 0, 0, 1000f, 0);
  ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_18(), iLocal_319, "exit_remote", sLocal_322, 8f, -8f, 0, 1000f);
  if (func_6(iLocal_321))
  {
    CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_321, iLocal_319, "exit_cam", sLocal_322);
  }
  if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_319))
  {
    PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_319, false);
  }
}