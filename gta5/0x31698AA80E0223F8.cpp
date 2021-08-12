// fmmc_launcher.ysc @ L340379
void func_5034(var uParam0, var uParam1, var uParam2)
{
  if (*uParam0 != -1)
  {
    if (HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam0))
    {
      HUD::SET_MP_GAMER_TAG_VISIBILITY(*uParam0, 0, false, 0);
      HUD::REMOVE_MP_GAMER_TAG(*uParam0);
      *uParam1 = 0;
      *uParam2 = 0;
      *uParam0 = -1;
    }
  }
}