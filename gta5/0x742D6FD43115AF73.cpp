// fm_race_creator.ysc @ L475862
void func_8048(bool bParam0)
{
  bool bVar0;
  
  bVar0 = bParam0;
  if (!MISC::IS_BIT_SET(Global_2416162.f_378, bVar0))
  {
    if (MISC::IS_BIT_SET(Global_2416162.f_376, bVar0))
    {
      if (HUD::DOES_BLIP_EXIST(Global_2416162[bVar0]))
      {
        if (HUD::GET_BLIP_SPRITE(Global_2416162[bVar0]) == func_8049(bParam0))
        {
          HUD::PULSE_BLIP(Global_2416162[bVar0]);
          MISC::SET_BIT(&(Global_2416162.f_377), bVar0);
          Global_2416162.f_300[bVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
        }
        MISC::CLEAR_BIT(&(Global_2416162.f_376), bVar0);
      }
      else if (bVar0 == Global_2441237)
      {
        MISC::CLEAR_BIT(&(Global_2416162.f_376), bVar0);
      }
    }
    if (MISC::IS_BIT_SET(Global_2416162.f_377, bVar0))
    {
      if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Global_2416162.f_300[bVar0]))
      {
        MISC::CLEAR_BIT(&(Global_2416162.f_377), bVar0);
      }
    }
  }
}