// mudtown1.ysc @ L52987
void func_1294(int iParam0, float fParam1, bool bParam2)
{
  int iVar0;
  struct<7> Var1;

  if (CAM::DOES_CAM_EXIST(iLocal_531[iParam0]))
  {
    return;
  }
  iVar0 = 0;
  while (iVar0 < iLocal_531)
  {
    if (CAM::DOES_CAM_EXIST(iLocal_531[iVar0]))
    {
      if (CAM::IS_CAM_ACTIVE(iLocal_531[iVar0]))
      {
        CAM::SET_CAM_ACTIVE(iLocal_531[iVar0], false);
      }
      CAM::DESTROY_CAM(iLocal_531[iVar0], false);
    }
    iVar0++;
  }
  Var1 = { func_1760(iParam0) };
  iLocal_531[iParam0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var1, Var1.f_3, Var1.f_6, false, 2);
  CAM::SHAKE_CAM(iLocal_531[iParam0], "HAND_SHAKE", fParam1);
  CAM::SET_CAM_ACTIVE(iLocal_531[iParam0], true);
  CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_531[iParam0], 0f);
  CAM::RENDER_SCRIPT_CAMS(true, bParam2, 3000, true, false, 0);
}