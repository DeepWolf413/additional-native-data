// fmmc_launcher.ysc @ L602098
void func_9632(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1675383))
    {
      GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Global_1675383, Global_1675383.f_16, Global_1675383.f_19, Global_1675383.f_22, Global_1675383.f_25, 2);
    }
  }
  if (bParam1)
  {
    if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1675383.f_1))
    {
      GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Global_1675383.f_1, Global_1675383.f_28, Global_1675383.f_31, Global_1675383.f_34, Global_1675383.f_37, 2);
    }
  }
}