// vig_playlist_party_hso.ysc @ L18062
void func_502(var uParam0)
{
  int iVar0;

  iVar0 = 1673015813;
  if (MISC::IS_BIT_SET(uParam0->f_1, 1))
  {
    iVar0 = -1337945352;
  }
  if (MISC::IS_BIT_SET(uParam0->f_1, 0))
  {
    if (MISC::IS_BIT_SET(uParam0->f_1, 2))
    {
      uParam0->f_2 = MAP::_BLIP_ADD_FOR_AREA(iVar0, func_484(*uParam0), func_769(*uParam0), func_770(*uParam0));
    }
    else
    {
      uParam0->f_2 = MAP::_BLIP_ADD_FOR_COORD(iVar0, func_484(*uParam0));
    }
  }
  else if (MISC::IS_BIT_SET(uParam0->f_1, 2))
  {
    uParam0->f_2 = MAP::_BLIP_ADD_FOR_RADIUS(iVar0, func_771(*uParam0), func_772(*uParam0));
  }
  else
  {
    uParam0->f_2 = MAP::_BLIP_ADD_FOR_COORD(iVar0, func_214(*uParam0));
  }
  MAP::SET_BLIP_SPRITE(uParam0->f_2, Global_1835011[*uParam0 /*74*/].f_26, true);
  MAP::SET_BLIP_FLASH_TIMER(uParam0->f_2, 63, *uParam0);
  MAP::_BLIP_SET_MODIFIER(uParam0->f_2, -1986290853);
}