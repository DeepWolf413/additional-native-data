// respawn_dump_body.ysc @ L2284
void func_67(var uParam0, bool bParam1)
{
  if (CAM::IS_CAM_RENDERING(*uParam0))
  {
    CAM::SET_CAM_ACTIVE(*uParam0, false);
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
  }
  CAM::_0x3C486E334520579D();
  if (bParam1)
  {
    CAM::_0x06557F6D96C86881();
  }
}