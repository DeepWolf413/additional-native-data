// act_cinema.ysc @ L110490
void func_999()
{
  GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_1001(1), false);
  if (func_1000(22))
  {
    GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_1001(12), false);
  }
  else
  {
    GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_1001(2), false);
  }
}