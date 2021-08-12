// am_mp_smpl_interior_ext.ysc @ L260900
void func_4285()
{
  if (!func_4290())
  {
    func_9(0);
    func_4287(&(Local_222.f_5.f_22), 0);
    func_3192();
    if (CAM::DOES_CAM_EXIST(Local_222.f_5.f_22.f_11))
    {
      CAM::DESTROY_CAM(Local_222.f_5.f_22.f_11, false);
      CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
    }
  }
  else
  {
    if ((func_4284(Local_222.f_1) && CAM::DOES_CAM_EXIST(Local_222.f_5.f_22.f_11)) && !GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS())
    {
      func_4286(&(Local_222.f_5.f_22), 0);
    }
    func_3199();
    HUD::DISABLE_FRONTEND_THIS_FRAME();
    HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  }
  func_461(1);
}