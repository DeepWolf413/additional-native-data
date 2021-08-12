// am_dead_drop.ysc @ L120231
void func_1288()
{
  if (func_1472())
  {
    return;
  }
  if (!HUD::DOES_BLIP_EXIST(iLocal_2210))
  {
    if (Local_84.f_3 != func_1601())
    {
      if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_84.f_3))
      {
        if (func_1600(Local_84.f_3, 1, 1))
        {
          if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_84.f_2))
          {
            iLocal_2210 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_84.f_2));
            HUD::SET_BLIP_SPRITE(iLocal_2210, 440);
            HUD::SHOW_HEIGHT_ON_BLIP(iLocal_2210, true);
            HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(iLocal_2210, true);
            HUD::SET_BLIP_PRIORITY(iLocal_2210, 10);
            HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_2210, "DD_BLIP2");
            HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_2210, false);
            HUD::SET_BLIP_SCALE(iLocal_2210, 1.25f);
          }
        }
      }
    }
  }
}