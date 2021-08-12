// fm_mission_controller_2020.ysc @ L812256
void func_15196()
{
  if (!func_200())
  {
    return;
  }
  if (!Global_4456448.f_84321)
  {
    return;
  }
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    return;
  }
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    func_2879(7);
  }
  else if (!CAM::IS_SCREEN_FADING_OUT())
  {
    CAM::DO_SCREEN_FADE_OUT(500);
    MISC::ALLOW_MISSION_CREATOR_WARP(true);
  }
}