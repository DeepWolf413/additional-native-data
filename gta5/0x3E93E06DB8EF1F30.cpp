// am_mp_defunct_base.ysc @ L348754
void func_5566(int* iParam0)
{
  HUD::UNLOCK_MINIMAP_ANGLE();
  HUD::UNLOCK_MINIMAP_POSITION();
  HUD::SET_RADAR_ZOOM(0);
  MISC::SET_BIT(iParam0, 2);
}