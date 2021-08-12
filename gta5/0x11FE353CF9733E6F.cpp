// pi_menu.ysc @ L89431
int func_381()
{
  iLocal_544 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("TEXTFIELD");
  if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_544))
  {
    return 1;
  }
  return 0;
}