// am_mp_arcade.ysc @ L300761
void func_4720(var uParam0)
{
  HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
  if (MISC::IS_BIT_SET(uParam0->f_11, true))
  {
    HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
    HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
    HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
    HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
    if (!func_87(&(uParam0->f_106)))
    {
      func_86(&(uParam0->f_106), 0, 0);
    }
    else if (func_85(&(uParam0->f_106), 4000, 0))
    {
      func_78(&(uParam0->f_106));
      MISC::CLEAR_BIT(&(uParam0->f_11), true);
    }
  }
}