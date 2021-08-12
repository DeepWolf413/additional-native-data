// pi_menu.ysc @ L95440
void func_456(bool bParam0)
{
  if (func_381())
  {
    GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_544, "SET_TEXT");
    if (bParam0)
    {
      GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(2);
    }
    else
    {
      GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(1);
    }
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
    iLocal_515 = 1;
  }
}