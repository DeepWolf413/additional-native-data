// am_king_of_the_castle.ysc @ L3114
void func_81(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = func_512(iParam0);
  if (iParam1 != -1)
  {
    iVar0 = iParam1;
  }
  if (MISC::IS_BIT_SET(iLocal_544, iVar0))
  {
    HUD::SET_MINIMAP_COMPONENT(func_83(iParam0, 0), false, func_82(iParam0, 1));
    if (bVar0 == 4)
    {
      HUD::SET_MINIMAP_COMPONENT(func_83(iParam0, 1), false, func_82(iParam0, 1));
    }
    MISC::CLEAR_BIT(&iLocal_544, bVar0);
  }
}