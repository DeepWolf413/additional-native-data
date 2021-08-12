// fillet_sp.ysc @ L13166
void func_518(var uParam0)
{
  int iVar0;
  char* sVar1;

  if (!CAM::DOES_CAM_EXIST(uParam0->f_314.f_39))
  {
    iVar0 = func_161(uParam0->f_21);
    sVar1 = func_680();
    uParam0->f_314.f_39 = CAM::CREATE_CAMERA(964613260, false);
    CAM::PLAY_CAM_ANIM(uParam0->f_314.f_39, sVar1, func_78(0, 0), Global_1900325.f_5, 0f, 0f, Global_1900325.f_16[iVar0], false, 2);
    CAM::SHAKE_CAM(uParam0->f_314.f_39, "TABLE_GAMES_IDLE_SHAKE", 1f);
    CAM::SET_CAM_FOV(uParam0->f_314.f_39, CAM::GET_FINAL_RENDERED_CAM_FOV());
    CAM::SET_CAM_ACTIVE(uParam0->f_314.f_39, true);
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  }
}