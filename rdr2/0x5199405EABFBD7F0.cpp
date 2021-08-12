// camera_item.ysc @ L1288
void func_22()
{
  if (func_58())
  {
    HUD::_TEXT_DATABASE_REQUEST("CAMERA");
  }
  else
  {
    HUD::_TEXT_DATABASE_REQUEST("CAMERA");
    STREAMING::REQUEST_ANIM_DICT(func_61());
    STREAMING::REQUEST_CLIP_SET(func_60());
    GRAPHICS::_0x5199405EABFBD7F0("CameraViewfinder");
    GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionBlink");
  }
}