// am_casino_peds.ysc @ L223309
void func_2312(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
  if (HUD::DOES_BLIP_EXIST(*uParam1))
  {
    if (((func_2140("HIF_INTRO_HELP") && HUD::IS_BLIP_FLASHING(*uParam1)) || func_2313(11, 146)) || !func_2316(uParam0))
    {
      HUD::SET_BLIP_PRIORITY(*uParam1, 8);
    }
    else
    {
      HUD::SET_BLIP_PRIORITY(*uParam1, func_2311(uParam0, 0));
    }
    HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CASINO_ENT_F6");
  }
}