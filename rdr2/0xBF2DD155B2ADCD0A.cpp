// camera_photomode.ysc @ L4029
void func_111()
{
  if (!GRAPHICS::_0xBF2DD155B2ADCD0A(sLocal_92))
  {
    GRAPHICS::_0x5199405EABFBD7F0(sLocal_92);
  }
  if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_92))
  {
    GRAPHICS::ANIMPOSTFX_PLAY(sLocal_92);
  }
}