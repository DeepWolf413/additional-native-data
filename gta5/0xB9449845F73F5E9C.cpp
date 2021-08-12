// fmmc_launcher.ysc @ L503294
void func_7834(int iParam0, int iParam1, int iParam2)
{
  bool bVar0;
  bool bVar1;
  bool bVar2;
  
  bVar2 = 288;
  if (iParam0 != -1)
  {
    bVar0 = ((288 * iParam0) + (2 * (iParam0 - 1)));
  }
  if (iParam1 != -1)
  {
    bVar1 = ((288 * iParam1) + (2 * (iParam1 - 1)));
  }
  if (iParam2 != -1)
  {
    bVar2 = ((288 * iParam2) + (2 * (iParam2 - 1)));
  }
  if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER("WEIGHT_MENU"))
  {
    GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
    GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar1);
    GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar2);
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  }
}