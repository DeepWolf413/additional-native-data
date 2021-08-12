// am_boat_taxi.ysc @ L5430
void func_132()
{
  if (!HUD::DOES_BLIP_EXIST(iLocal_184))
  {
    if (func_72(Local_63.f_2))
    {
      iLocal_184 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_63.f_2));
      HUD::SET_BLIP_SPRITE(iLocal_184, 356);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_184, "BTX_BLIP");
      HUD::SET_BLIP_FLASHES(iLocal_184, true);
      HUD::SET_BLIP_CATEGORY(iLocal_184, 6);
    }
  }
}