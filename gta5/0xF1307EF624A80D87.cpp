// am_mp_arcade.ysc @ L351293
float func_5678()
{
  GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uLocal_191, &iLocal_192);
  fLocal_189 = GRAPHICS::_GET_ASPECT_RATIO(false);
  if (MISC::IS_PC_VERSION())
  {
    if (fLocal_189 >= 4f)
    {
      fLocal_189 = (fLocal_189 / 3f);
    }
  }
  return fLocal_189;
}