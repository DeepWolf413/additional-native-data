// fm_race_creator.ysc @ L479339
void func_8155(bool bParam0)
{
  if (HUD::DOES_BLIP_EXIST(Global_2416162[bParam0]))
  {
    func_8156(&(Global_2416162[bParam0]));
    HUD::SHOW_CREW_INDICATOR_ON_BLIP(Global_2416162[bParam0], false);
  }
  MISC::CLEAR_BIT(&(Global_2416162.f_381), bParam0);
  func_8143(bParam0);
}