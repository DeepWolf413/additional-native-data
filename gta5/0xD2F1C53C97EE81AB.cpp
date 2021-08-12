// extreme1.ysc @ L45039
int func_461()
{
  if (iLocal_554 == 1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_874))
  {
    if ((iLocal_892 == 0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_874) > 0.7f)
    {
      GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
      AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
      iLocal_892 = 1;
    }
    if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_874) > 0.92f)
    {
      TASK::OPEN_SEQUENCE_TASK(&iLocal_875);
      TASK::TASK_FORCE_MOTION_STATE(0, -1161760501, false);
      TASK::TASK_PARACHUTE(0, true, false);
      TASK::CLOSE_SEQUENCE_TASK(iLocal_875);
      TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_875);
      TASK::CLEAR_SEQUENCE_TASK(&iLocal_875);
      return 1;
    }
  }
  return 0;
}