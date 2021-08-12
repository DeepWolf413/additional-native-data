// benchmark.ysc @ L2147
void func_82()
{
  if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", false, -1))
  {
    iLocal_151 = 15000;
    Local_227.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
    CAM::ADD_CAM_SPLINE_NODE(Local_227.f_4, Local_87[iLocal_64 /*3*/], Local_103[iLocal_64 /*3*/], iLocal_151, 3, 2);
    CAM::ADD_CAM_SPLINE_NODE(Local_227.f_4, Local_119[iLocal_64 /*3*/], Local_135[iLocal_64 /*3*/], iLocal_151, 3, 2);
    CAM::SET_CAM_SPLINE_PHASE(Local_227.f_4, 0f);
    CAM::SET_CAM_FOV(Local_227.f_4, 50f);
    CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_227.f_4, 3);
    CAM::SET_CAM_ACTIVE(Local_227.f_4, true);
    Local_227.f_3 = 0;
    func_83(&Local_227, 1, 0, 0, 1, 1, 0, 1);
    iLocal_239 = func_45();
    func_75(&iLocal_239, 0, 0, 23, 0, 0, 0);
    iLocal_240 = func_63(iLocal_239);
    if (iLocal_64 == 4)
    {
      iLocal_159 = MISC::GET_GAME_TIMER();
    }
    func_18();
  }
}