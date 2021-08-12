// agency_heist3a.ysc @ L119155
void func_794(int iParam0, int* iParam1)
{
  if (HUD::DOES_BLIP_EXIST(iParam0))
  {
    if (HUD::DOES_BLIP_EXIST(iParam1->f_6))
    {
      HUD::SET_BLIP_ROUTE(iParam1->f_6, false);
    }
    HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
    HUD::CLEAR_GPS_MULTI_ROUTE();
    iParam1->f_6 = iParam0;
    HUD::SET_BLIP_ROUTE(iParam0, true);
  }
}