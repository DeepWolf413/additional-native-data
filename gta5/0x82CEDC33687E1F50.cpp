// am_mp_defunct_base.ysc @ L312341
void func_5115(bool bParam0)
{
  if (Global_2465785 == 0 && bParam0 == 1)
  {
    Global_2465785 = bParam0;
    HUD::DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(bParam0);
  }
  if (Global_2465785 == 1 && bParam0 == 0)
  {
    Global_2465785 = bParam0;
    HUD::DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(bParam0);
  }
}