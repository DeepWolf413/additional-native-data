// rcm_poisoned_well5.ysc @ L9904
void func_318()
{
  float fVar0;

  if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_80))
  {
    return;
  }
  fVar0 = (MISC::GET_FRAME_TIME() * 30f);
  if (bLocal_162)
  {
    fLocal_161 = (fLocal_161 + (0.0001f * fVar0));
  }
  else
  {
    fLocal_161 = (fLocal_161 - (0.0002f * fVar0));
    if (fLocal_161 <= 0f)
    {
      GRAPHICS::ANIMPOSTFX_STOP(sLocal_80);
    }
  }
  fLocal_161 = func_771(fLocal_161, 0f, 0.1f);
  GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_80, fLocal_161);
}