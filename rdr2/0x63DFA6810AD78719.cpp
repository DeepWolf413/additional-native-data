// marston6.ysc @ L67821
void func_1773()
{
  Local_177.f_82 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
  CAM::SET_CAM_COORD(Local_177.f_82, 2832.5f, -1124.1f, 46.8f);
  CAM::SET_CAM_ROT(Local_177.f_82, -3.8f, 0f, -111.7f, 2);
  CAM::SET_CAM_FOV(Local_177.f_82, 51.3f);
  CAM::SET_CAM_ACTIVE(Local_177.f_82, true);
  CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  MAP::DISPLAY_RADAR(false);
}