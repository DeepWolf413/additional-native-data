// fmmc_launcher.ysc @ L599363
void func_9534()
{
  float fVar0;
  float fVar1;
  
  func_6021();
  fVar0 = CAM::GET_FINAL_RENDERED_CAM_NEAR_DOF();
  fVar1 = CAM::GET_FINAL_RENDERED_CAM_FAR_DOF();
  GRAPHICS::_SET_HIDOF_ENV_BLUR_PARAMS(true, true, 0f, fVar0, fVar1, (fVar1 + 25f));
  func_10056(1);
  GRAPHICS::ANIMPOSTFX_PLAY("MP_job_load", 0, true);
  AUDIO::PLAY_SOUND_FRONTEND(-1, "SCREEN_FLASH", "CELEBRATION_SOUNDSET", true);
}