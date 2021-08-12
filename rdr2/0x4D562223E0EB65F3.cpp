// show_movie_magic_lantern.ysc @ L2882
bool func_67()
{
  if (GRAPHICS::GET_TV_CHANNEL() == -1)
  {
    return true;
  }
  if (GRAPHICS::_IS_TV_PLAYLIST_ITEM_PLAYING(joaat("END_OF_MOVIE_MARKER")))
  {
    return true;
  }
  return false;
}