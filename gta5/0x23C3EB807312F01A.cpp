// fm_race_creator.ysc @ L479313
void func_8153(bool bParam0, bool bParam1)
{
  if (bParam1)
  {
    if (!MISC::IS_BIT_SET(Global_2416162.f_384, bParam0))
    {
      HUD::SHOW_FRIEND_INDICATOR_ON_BLIP(Global_2416162[bParam0], true);
      MISC::SET_BIT(&(Global_2416162.f_382), bParam0);
    }
  }
  else
  {
    if (HUD::DOES_BLIP_EXIST(Global_2416162[bParam0]))
    {
      HUD::SHOW_FRIEND_INDICATOR_ON_BLIP(Global_2416162[bParam0], false);
    }
    MISC::CLEAR_BIT(&(Global_2416162.f_382), bParam0);
    func_8143(bParam0);
  }
}