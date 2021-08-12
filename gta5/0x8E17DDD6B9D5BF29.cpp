// am_mp_arc_cab_manager.ysc @ L92425
int func_824(var* uParam0)
{
  GRAPHICS::_PLAY_BINK_MOVIE(uParam0->f_5);
  GRAPHICS::_DRAW_BINK_MOVIE(uParam0->f_5, func_827(0.5f), 0.5f, (func_826(1920f) * fLocal_133), func_825(1080f), 0f, 255, 255, 255, 255);
  GRAPHICS::_SET_BINK_SHOULD_SKIP(uParam0->f_5, true);
  if (GRAPHICS::_GET_BINK_MOVIE_TIME(uParam0->f_5) >= 99f)
  {
    GRAPHICS::_STOP_BINK_MOVIE(uParam0->f_5);
    GRAPHICS::_RELEASE_BINK_MOVIE(uParam0->f_5);
    return 1;
  }
  return 0;
}