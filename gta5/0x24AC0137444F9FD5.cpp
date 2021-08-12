// freemode.ysc @ L963821
void func_14989(var uParam0)
{
  if (uParam0->f_2 == 1 && func_15015())
  {
    if (!HUD::DOES_BLIP_EXIST(uParam0->f_13))
    {
      if (!func_9(func_15038(*uParam0)))
      {
        uParam0->f_13 = HUD::ADD_BLIP_FOR_COORD(func_15038(*uParam0));
        HUD::SET_BLIP_SPRITE(uParam0->f_13, 673);
        func_2393(&(uParam0->f_13), 29);
        HUD::SET_BLIP_PRIORITY(uParam0->f_13, 5);
        HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_13, "AMRCTT_BLIP");
        HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0->f_13, true);
        HUD::SET_BLIP_AS_SHORT_RANGE(uParam0->f_13, true);
        uParam0->f_24.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
        STATS::_0x6DEE77AFF8C21BD1(&(uParam0->f_38), &(uParam0->f_39));
      }
    }
    func_15013(func_15038(*uParam0), 21, 2.6f);
    func_14990(uParam0);
  }
  else
  {
    if (HUD::DOES_BLIP_EXIST(uParam0->f_13))
    {
      HUD::REMOVE_BLIP(&(uParam0->f_13));
    }
    func_15016();
  }
}