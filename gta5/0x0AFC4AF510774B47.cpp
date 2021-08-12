// am_mp_arcade.ysc @ L309931
void func_4889(var uParam0)
{
  switch (*uParam0)
  {
    case 2:
    case 3:
    case 1:
      break;
    
    case 5:
    case 6:
    case 7:
    case 4:
    case 9:
    case 10:
    case 16:
    case 17:
    case 18:
    case 12:
      CAM::INVALIDATE_IDLE_CAM();
      HUD::HUD_FORCE_WEAPON_WHEEL(false);
      HUD::DISPLAY_AMMO_THIS_FRAME(false);
      HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
      HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
      HUD::_HUD_WEAPON_WHEEL_IGNORE_SELECTION();
      func_4739(1);
      func_738(0);
      func_274();
      break;
  }
}