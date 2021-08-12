// rcm_abigail31.ysc @ L26744
void func_812(var uParam0, bool bParam1)
{
  if (GRAPHICS::GET_TV_CHANNEL() == -1)
  {
    return;
  }
  if (uParam0->f_1071)
  {
    if (!bParam1)
    {
      GRAPHICS::_0x32DE2BFFDA43E62A();
    }
    HUD::SET_TEXT_RENDER_ID(uParam0->f_1074);
    GRAPHICS::DRAW_TV_CHANNEL(uParam0->f_1093, uParam0->f_1094, uParam0->f_1091, uParam0->f_1092, 0f, 255, 255, 255, 128);
  }
}