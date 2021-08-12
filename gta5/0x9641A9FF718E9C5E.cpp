// am_mp_garage_control.ysc @ L110564
void func_1003()
{
  Local_65.f_9.f_15 = 0;
  Global_2544210.f_4584 = 0;
  HUD::UNLOCK_MINIMAP_ANGLE();
  if (iLocal_104)
  {
    NETWORK::SET_STORE_ENABLED(true);
    iLocal_104 = 0;
  }
  if (CAM::DOES_CAM_EXIST(Local_65.f_9))
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
    CAM::DESTROY_CAM(Local_65.f_9, false);
    func_33();
    func_32(12, 0, -1);
    func_31(1);
    CAM::SET_WIDESCREEN_BORDERS(false, -1);
    HUD::DISPLAY_RADAR(true);
    HUD::DISPLAY_HUD(true);
  }
}