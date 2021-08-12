// respawn_dump_body.ysc @ L2054
int func_52(var uParam0)
{
  if (CAM::IS_CAM_RENDERING(*uParam0))
  {
    CAM::_FREEZE_GAMEPLAY_CAM_THIS_FRAME();
    CAM::SET_CAM_ACTIVE(*uParam0, false);
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
    return 1;
  }
  return 0;
}