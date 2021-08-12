// fm_race_creator.ysc @ L479280
void func_8151(bool bParam0, bool bParam1)
{
  if (HUD::DOES_BLIP_EXIST(Global_2416162[bParam0]))
  {
    if (bParam1)
    {
      if (!MISC::IS_BIT_SET(Global_2416162.f_383, bParam0))
      {
        HUD::SHOW_HEADING_INDICATOR_ON_BLIP(Global_2416162[bParam0], true);
        MISC::SET_BIT(&(Global_2416162.f_383), bParam0);
      }
    }
    else if (MISC::IS_BIT_SET(Global_2416162.f_383, bParam0))
    {
      HUD::SHOW_HEADING_INDICATOR_ON_BLIP(Global_2416162[bParam0], false);
      MISC::CLEAR_BIT(&(Global_2416162.f_383), bParam0);
    }
  }
  else if (MISC::IS_BIT_SET(Global_2416162.f_383, bParam0))
  {
    MISC::CLEAR_BIT(&(Global_2416162.f_383), bParam0);
  }
}