// am_heli_taxi.ysc @ L12110
int func_332(int iParam0, int iParam1, bool bParam2)
{
  int iVar0;
  
  iVar0 = HUD::GET_BLIP_SPRITE(iParam1);
  if (func_342(iParam0, bParam2))
  {
    if (!iVar0 == func_341(iVar0))
    {
      HUD::SET_BLIP_SPRITE(iParam1, func_341(iVar0));
      return 1;
    }
    else if (func_334() && iVar0 == func_341(iVar0))
    {
      return 1;
    }
  }
  else if (!iVar0 == func_333(iVar0))
  {
    HUD::SET_BLIP_SPRITE(iParam1, func_333(iVar0));
    return 1;
  }
  else if (func_334() && iVar0 == func_333(iVar0))
  {
    return 1;
  }
  return 0;
}