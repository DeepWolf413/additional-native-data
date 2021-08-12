// fmmc_launcher.ysc @ L651824
void func_11150(bool bParam0, int iParam1)
{
  int iVar0;
  
  if (HUD::IS_MP_GAMER_TAG_MOVIE_ACTIVE())
  {
    if (HUD::IS_MP_GAMER_TAG_ACTIVE(iParam0))
    {
      HUD::_SET_MP_GAMER_TAG_ENABLED(iParam0, false);
    }
    if (!HUD::IS_MP_GAMER_TAG_ACTIVE(iParam0) && !HUD::IS_MP_GAMER_TAG_FREE(iParam0))
    {
    }
    else if (HUD::IS_MP_GAMER_TAG_ACTIVE(iParam0))
    {
      HUD::REMOVE_MP_GAMER_TAG(iParam0);
    }
  }
  Global_1389866.f_166[iParam0] = -1;
  MISC::CLEAR_BIT(&(Global_1389866.f_65), iParam0);
  func_11151(iParam1);
  iVar0 = 0;
  while (iVar0 <= 1)
  {
    Global_1389866.f_99[iVar0 /*33*/][bParam0] = 0;
    iVar0++;
  }
}