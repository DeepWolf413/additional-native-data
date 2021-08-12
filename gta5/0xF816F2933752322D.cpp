// camhedz_arcade.ysc @ L85776
void func_638(var uParam0, char* sParam1)
{
  GRAPHICS::_STOP_BINK_MOVIE(*uParam0);
  GRAPHICS::_RELEASE_BINK_MOVIE(*uParam0);
  *uParam0 = GRAPHICS::_SET_BINK_MOVIE(sParam1);
  GRAPHICS::_PLAY_BINK_MOVIE(*uParam0);
  GRAPHICS::_SET_BINK_SHOULD_SKIP(*uParam0, true);
  GRAPHICS::_SET_BINK_MOVIE_UNK_2(*uParam0, true);
}