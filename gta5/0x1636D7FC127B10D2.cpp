// fm_mission_controller.ysc @ L684474
void func_11367()
{
  GRAPHICS::SEETHROUGH_RESET();
  GRAPHICS::SEETHROUGH_SET_HEATSCALE(0, 0f);
  GRAPHICS::SEETHROUGH_SET_HEATSCALE(1, 1f);
  GRAPHICS::SEETHROUGH_SET_HEATSCALE(2, 1f);
  GRAPHICS::SEETHROUGH_SET_HEATSCALE(3, 1f);
  GRAPHICS::_SEETHROUGH_SET_COLOR_NEAR(0, 0, 100);
  GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(12.5f);
  GRAPHICS::_SEETHROUGH_SET_NOISE_AMOUNT_MIN(0.01f);
  GRAPHICS::_SEETHROUGH_SET_NOISE_AMOUNT_MAX(0.2f);
  GRAPHICS::_SEETHROUGH_SET_HI_LIGHT_INTENSITY(0.35f);
  GRAPHICS::_SEETHROUGH_SET_HI_LIGHT_NOISE(0.3f);
  if (MISC::IS_BIT_SET(Global_4456448.f_15, 19))
  {
    func_11368();
  }
}