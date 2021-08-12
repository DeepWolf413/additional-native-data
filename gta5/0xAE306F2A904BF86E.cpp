// am_casino_peds.ysc @ L251757
void func_3051(var uParam0)
{
  if (CAM::DOES_CAM_EXIST(uParam0->f_11))
  {
    CAM::DESTROY_CAM(uParam0->f_11, false);
  }
  uParam0->f_11 = CAM::CREATE_CAMERA(26379945, true);
  CAM::SET_CAM_PARAMS(uParam0->f_11, uParam0->f_13, uParam0->f_16, uParam0->f_19, 0, 1, 1, 2);
  CAM::SET_CAM_FAR_CLIP(uParam0->f_11, 1000f);
  CAM::SHAKE_CAM(uParam0->f_11, "HAND_SHAKE", uParam0->f_40);
  CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}