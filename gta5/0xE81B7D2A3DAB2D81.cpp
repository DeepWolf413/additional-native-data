// am_mp_drone.ysc @ L10947
void func_362()
{
  float fVar0;
  float fVar1;
  
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_158))
  {
    if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_185.f_158), false))
    {
      if ((func_24() || func_38()) || func_35())
      {
        fVar0 = -323.1f;
        fVar1 = -1970.9f;
      }
      else
      {
        fVar0 = Local_185.f_149;
        fVar1 = Local_185.f_149.f_1;
      }
      HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar0, fVar1);
      HUD::_0xA17784FCA9548D15(fVar0, fVar1, 0);
      if (!INTERIOR::IS_VALID_INTERIOR(Global_1695733.f_24) && !func_35())
      {
        if (!MISC::IS_BIT_SET(Local_185.f_5, 8))
        {
          HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
        }
        HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
      }
    }
  }
}