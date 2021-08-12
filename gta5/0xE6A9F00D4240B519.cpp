// am_mp_arena_garage.ysc @ L309104
void func_4884(var uParam0)
{
  if (func_4857())
  {
    return;
  }
  if (uParam0->f_96 == -1)
  {
    return;
  }
  if (uParam0->f_2 != uParam0->f_96 && uParam0->f_1 != 1)
  {
    func_4886(uParam0->f_96, &(uParam0->f_2));
    func_4885(&(uParam0->f_2));
  }
  if (HUD::IS_NAMED_RENDERTARGET_LINKED(uParam0->f_2.f_4))
  {
    HUD::SET_TEXT_RENDER_ID(uParam0->f_2.f_1);
    GRAPHICS::_SET_SCALEFORM_FIT_RENDERTARGET(uParam0->f_2.f_3, true);
    GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
    GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
    GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_2.f_3, 0.25f, 0.5f, 0.5f, 1f, 255, 255, 255, 255, 0);
    HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
  }
}