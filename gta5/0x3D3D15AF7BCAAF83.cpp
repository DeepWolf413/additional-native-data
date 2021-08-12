// family1.ysc @ L29863
void func_472()
{
  if (HUD::DOES_BLIP_EXIST(Local_2953.f_5))
  {
    if (!iLocal_2978)
    {
      HUD::START_GPS_MULTI_ROUTE(156, true, false);
      HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1461.174f, -85.7604f, 49.9523f);
      HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(Local_3012);
      HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
      iLocal_5956 = MISC::GET_GAME_TIMER();
      iLocal_5957 = 0;
      iLocal_2978 = 1;
    }
    if ((iLocal_2978 == 1 && (MISC::GET_GAME_TIMER() - iLocal_5956) > 10000) && iLocal_5957 == 0)
    {
      HUD::SET_BLIP_ROUTE(Local_2953.f_6, false);
      iLocal_5957 = 1;
    }
  }
  else if (iLocal_2978)
  {
    HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
    HUD::CLEAR_GPS_MULTI_ROUTE();
    iLocal_2978 = 0;
  }
}