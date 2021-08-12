// fm_mission_controller.ysc @ L377610
void func_5512()
{
  if (HUD::DOES_BLIP_EXIST(iLocal_6464))
  {
    HUD::_CLEAR_ALL_BLIP_ROUTES();
    HUD::SET_BLIP_COLOUR(iLocal_6464, 0);
    HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_6464, true);
  }
}