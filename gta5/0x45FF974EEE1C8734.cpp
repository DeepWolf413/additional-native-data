// am_ammo_drop.ysc @ L1560
void func_41()
{
  if (!HUD::DOES_BLIP_EXIST(iLocal_181))
  {
    iLocal_181 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4));
    if (Local_60.f_18)
    {
      HUD::SET_BLIP_SPRITE(iLocal_181, 84);
      HUD::SET_BLIP_SCALE(iLocal_181, 1.2f);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_181, "AMD_BLIPBALL");
    }
    else
    {
      HUD::SET_BLIP_SPRITE(iLocal_181, 351);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_181, "AMD_BLIPN");
      HUD::SET_BLIP_SCALE(iLocal_181, 0.7f);
    }
    HUD::SET_BLIP_COLOUR(iLocal_181, 2);
    HUD::SET_BLIP_ALPHA(iLocal_181, 120);
  }
}