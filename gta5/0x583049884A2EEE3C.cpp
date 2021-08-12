// fm_mission_controller.ysc @ L252426
void func_3285(bool bParam0)
{
  if (func_3288() != 4)
  {
    func_3278();
  }
  if (!bParam0 && func_3288() != 4)
  {
    func_365(0);
  }
  func_3287();
  if (func_3288() != 4)
  {
    HUD::DISABLE_FRONTEND_THIS_FRAME();
  }
  func_3280();
  func_3279(4, -1);
  if (func_3288() != 4)
  {
    HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  }
  else
  {
    func_3286();
  }
  func_3277(func_3288() != 4);
  HUD::THEFEED_HIDE_THIS_FRAME();
  HUD::THEFEED_FLUSH_QUEUE();
  HUD::THEFEED_FORCE_RENDER_OFF();
}