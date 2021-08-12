// gb_target_pursuit.ysc @ L22700
void func_633(int iParam0)
{
  if (!HUD::DOES_BLIP_EXIST(iLocal_459[iParam0]))
  {
    if (iParam0 == 9)
    {
      iLocal_459[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_664.f_19[iParam0 /*2*/]));
      HUD::SET_BLIP_SCALE(iLocal_459[iParam0], 0.8f);
      if (func_11(NETWORK::PARTICIPANT_ID_TO_INT()) == 6)
      {
        HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_459[iParam0], true);
      }
      HUD::SET_BLIP_SPRITE(iLocal_459[iParam0], 432);
      func_628(&(iLocal_459[iParam0]), 6);
      HUD::SET_BLIP_PRIORITY(iLocal_459[iParam0], 11);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_459[iParam0], "BB_TP_BLIP_DEAL");
    }
    else if (!iLocal_480[iParam0])
    {
      HUD::SET_PED_HAS_AI_BLIP(NETWORK::NET_TO_PED(Local_664.f_19[iParam0 /*2*/]), true);
      HUD::SET_PED_AI_BLIP_HAS_CONE(NETWORK::NET_TO_PED(Local_664.f_19[iParam0 /*2*/]), false);
      iLocal_480[iParam0] = 1;
      if (func_508())
      {
        HUD::SET_PED_AI_BLIP_NOTICE_RANGE(NETWORK::NET_TO_PED(Local_664.f_19[iParam0 /*2*/]), 7000f);
      }
    }
  }
}