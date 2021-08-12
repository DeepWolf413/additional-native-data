// am_mp_arcade.ysc @ L349633
void func_5634(var uParam0)
{
  if (uParam0->f_8 == -1)
  {
    if ((MISC::GET_FRAME_COUNT() % 180) == 0)
    {
    }
    return;
  }
  HUD::SET_TEXT_RENDER_ID(uParam0->f_8);
  GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
  GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
  GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
  func_5676();
  if (func_5673(uParam0))
  {
    if (uParam0->f_9 < 255)
    {
      func_5670(uParam0);
      func_5635(0, 0);
    }
  }
  if (uParam0->f_9 > 0)
  {
    GRAPHICS::DRAW_RECT(0f, 0f, 2f, 2f, 0, 0, 0, uParam0->f_9, false);
  }
  GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
  HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}