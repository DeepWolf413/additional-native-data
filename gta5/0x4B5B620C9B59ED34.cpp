// fm_mission_controller.ysc @ L611622
void func_10119(var uParam0, int iParam1)
{
  if (HUD::DOES_BLIP_EXIST(*iParam1))
  {
    if (uParam0->f_7 == 0)
    {
      HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(*iParam1, false);
      HUD::_0x4B5B620C9B59ED34(*iParam1, false);
    }
    else if (uParam0->f_7 == 2)
    {
      HUD::_0x4B5B620C9B59ED34(*iParam1, false);
      HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(*iParam1, true);
    }
    else if (uParam0->f_7 == 1)
    {
      HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(*iParam1, false);
      HUD::_0x4B5B620C9B59ED34(*iParam1, true);
    }
  }
}