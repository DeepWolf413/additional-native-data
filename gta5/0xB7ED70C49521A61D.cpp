// fmmc_launcher.ysc @ L635690
void func_10689(int* iParam0)
{
  if (MISC::IS_BIT_SET(*iParam0, true))
  {
    if (iParam0->f_3 != 0)
    {
      GRAPHICS::DELETE_CHECKPOINT(iParam0->f_3);
      iParam0->f_3 = 0;
    }
    if (iParam0->f_1 != -1)
    {
      func_10667(iParam0->f_1);
    }
    iParam0->f_1 = -1;
    GRAPHICS::UNPATCH_DECAL_DIFFUSE_MAP(9123);
    GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPMissMarkers256");
    MISC::CLEAR_BIT(iParam0, true);
  }
}