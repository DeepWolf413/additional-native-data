// am_casino_limo.ysc @ L53502
void func_594()
{
  if (func_600())
  {
    if (!HUD::DOES_BLIP_EXIST(iLocal_312))
    {
      iLocal_312 = HUD::ADD_BLIP_FOR_ENTITY(func_7());
      HUD::SET_BLIP_SPRITE(iLocal_312, func_599());
      func_596(&iLocal_312, func_598());
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_312, func_595());
    }
    if (HUD::DOES_BLIP_EXIST(iLocal_312))
    {
      HUD::_SET_BLIP_SQUARED_ROTATION(iLocal_312, ENTITY::GET_ENTITY_HEADING(func_7()));
    }
  }
  else if (HUD::DOES_BLIP_EXIST(iLocal_312))
  {
    HUD::REMOVE_BLIP(&iLocal_312);
  }
}