// fm_race_creator.ysc @ L475620
int func_8035(bool bParam0)
{
  if (MISC::IS_BIT_SET(Global_2416162.f_366, bParam0) || MISC::IS_BIT_SET(Global_2416162.f_376, bParam0))
  {
    return 1;
  }
  if (HUD::DOES_BLIP_EXIST(Global_2416162[bParam0]))
  {
    if (HUD::_0x2C173AE2BDB9385E(Global_2416162[bParam0]) != 0)
    {
      return 1;
    }
  }
  return 0;
}