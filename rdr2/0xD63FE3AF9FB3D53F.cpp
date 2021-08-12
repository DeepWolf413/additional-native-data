// act_bankrobbery01.ysc @ L12200
bool func_245(var uParam0)
{
  if (func_88(Global_1935630, 2048))
  {
    return false;
  }
  if (func_725(uParam0))
  {
    CAM::DO_SCREEN_FADE_IN(500);
    func_726(0);
    HUD::DISPLAY_HUD(true);
    MAP::DISPLAY_RADAR(true);
    return true;
  }
  return false;
}