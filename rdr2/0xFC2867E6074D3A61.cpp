// generic_wagon_fence_core.ysc @ L1614
void func_65(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8)
{
  int iVar0;

  iVar0 = 256;
  func_68(&iVar0, 0, 2, 0, 0, 0, 0);
  if (!CAM::DOES_CAM_EXIST(*uParam0))
  {
    *uParam0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", vParam1, vParam4, fParam7, true, 2);
  }
  if (CAM::DOES_CAM_EXIST(*uParam0))
  {
    if (iParam8 != 0)
    {
      CAM::POINT_CAM_AT_ENTITY(*uParam0, iParam8, 0f, 0f, 0f, true);
    }
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  }
}