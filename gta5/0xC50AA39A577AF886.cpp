// apparcadebusiness.ysc @ L14562
void func_348()
{
  if (func_349())
  {
    if (!MISC::IS_BIT_SET(iLocal_130, 3))
    {
      GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_311, "GET_CURRENT_SELECTION");
      iLocal_312 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
      MISC::SET_BIT(&iLocal_130, 3);
    }
  }
}