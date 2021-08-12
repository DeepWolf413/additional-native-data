// am_hot_target.ysc @ L122888
void func_1329()
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  
  if (func_1512())
  {
    return;
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_2131))
  {
    HUD::REMOVE_BLIP(&iLocal_2131);
  }
  if (!HUD::DOES_BLIP_EXIST(iLocal_2133))
  {
    iLocal_2133 = HUD::ADD_BLIP_FOR_COORD(Local_84.f_16);
    HUD::SET_BLIP_COLOUR(iLocal_2133, 5);
    HUD::SHOW_HEIGHT_ON_BLIP(iLocal_2133, true);
    HUD::SET_BLIP_FLASH_TIMER(iLocal_2133, 7000);
    HUD::SET_BLIP_PRIORITY(iLocal_2133, 8);
    HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_2133, "HTV_BLIP2");
    HUD::SET_BLIP_ROUTE(iLocal_2133, true);
    HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
    iLocal_2134 = GRAPHICS::CREATE_CHECKPOINT(10, Local_84.f_16 + Vector(3f, 0f, 0f), 0f, 0f, 0f, Local_84.f_20, iVar0, iVar1, iVar2, 75, 0);
  }
}