// marston7.ysc @ L83956
void func_2427()
{
  if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_81))
  {
    HUD::SET_TEXT_RENDER_ID(HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sLocal_81));
    GRAPHICS::DRAW_SPRITE(sLocal_83, sLocal_83, 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, 255, false);
  }
}