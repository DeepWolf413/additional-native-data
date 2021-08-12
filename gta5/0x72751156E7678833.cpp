// business_battles_sell.ysc @ L361413
void func_6026(int iParam0)
{
  if (func_6028() && iParam0 == iLocal_762)
  {
    if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_788[iParam0]))
    {
      if (func_6027())
      {
        PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
      }
      else
      {
        PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
      }
      HUD::SET_BLIP_ROUTE(iLocal_788[iParam0], true);
    }
  }
  else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_788[iParam0]))
  {
    PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
    HUD::SET_BLIP_ROUTE(iLocal_788[iParam0], false);
  }
}