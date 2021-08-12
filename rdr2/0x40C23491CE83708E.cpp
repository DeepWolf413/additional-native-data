// clemenscove.ysc @ L3563
void func_105(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
  var uVar0;

  func_285(&uVar0, 0, 2, 0, 0, 0, 0);
  if (!CAM::DOES_CAM_EXIST(*uParam0))
  {
    *uParam0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", vParam1, vParam4, fParam7, true, 2);
  }
  if (CAM::DOES_CAM_EXIST(*uParam0))
  {
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  }
}