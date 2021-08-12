// am_mp_rc_vehicle.ysc @ L111401
void func_1067()
{
  float fVar0;
  float fVar1;
  
  if (func_984(Global_1702514))
  {
    fVar0 = Local_121.f_15;
    fVar1 = Local_121.f_15.f_1;
    if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
    {
      if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::_IS_MINIMAP_IN_INTERIOR())
      {
        fVar0 = -323.1f;
        fVar1 = -1970.9f;
        HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
      }
    }
    HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar0, fVar1);
    HUD::_0xA17784FCA9548D15(fVar0, fVar1, Local_121.f_15.f_2);
    if (!INTERIOR::IS_VALID_INTERIOR(Local_121.f_28))
    {
      if (!MISC::IS_BIT_SET(Local_121, 10))
      {
        HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
      }
      HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
    }
  }
}