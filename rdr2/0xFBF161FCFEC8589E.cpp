// camp_beaverhollow.ysc @ L4389
int func_120()
{
  PED::SET_PED_RESET_FLAG(Global_35, 203, true);
  if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransitionBlinkSlow") && GRAPHICS::_0xFBF161FCFEC8589E("CamTransitionBlinkSlow", 2, false, &(Local_18.f_1934.f_79)))
  {
    ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PLAYER::PLAYER_PED_ID(), func_479(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67), func_480(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3), true, true, false);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_480(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_10, Local_18.f_1934.f_67.f_4), 1f);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_480(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_11, Local_18.f_1934.f_67.f_5), 1f);
    TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 2f, 33);
    return 4;
  }
  if (func_174(&(Local_18.f_1934.f_80)) && func_481(&(Local_18.f_1934.f_80)) > 5000)
  {
    TASK::CLEAR_PED_TASKS(Global_35, true, false);
    return 0;
  }
  return -1;
}