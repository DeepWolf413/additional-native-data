// franklin0.ysc @ L3120
void func_51(float fParam0, int iParam1, bool bParam2)
{
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
  HUD::DISPLAY_RADAR(true);
  HUD::DISPLAY_HUD(true);
  func_9(0);
  if (bParam2)
  {
    CAM::_SET_GAMEPLAY_CAM_VEHICLE_CAMERA("SPEEDO");
    CAM::_0x59424BD75174C9B1();
  }
  CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, fParam0, iParam1, 0);
  func_17(0, 1, 1, 0, 0, 0, 0);
  iLocal_1472 = 0;
  bLocal_1473 = false;
  iLocal_1474 = 0;
  bLocal_1475 = false;
  iLocal_1111 = 0;
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    if (CAM::DOES_CAM_EXIST(iLocal_1396))
    {
      CAM::DESTROY_CAM(iLocal_1396, false);
    }
    CAM::DO_SCREEN_FADE_IN(800);
  }
}