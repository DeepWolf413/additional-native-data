// bounty1.ysc @ L47809
void func_1179(bool bParam0, bool bParam1, int iParam2)
{
  if (bParam0)
  {
    if (!MAP::DOES_BLIP_EXIST(iLocal_138))
    {
      iLocal_138 = func_1664(-308585968, vLocal_72, iParam2, 1);
      MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_138, "BOU1_SEARCH_AREA");
      MAP::SET_BLIP_SPRITE(iLocal_138, joaat("BLIP_MISSION_BOUNTY"), false);
      if (bParam1)
      {
        MAP::START_GPS_MULTI_ROUTE(joaat("COLOR_YELLOW"), true, false);
        MAP::ADD_POINT_TO_GPS_MULTI_ROUTE(-43.67593f, 1114.107f, 165.9f, false);
        MAP::ADD_POINT_TO_GPS_MULTI_ROUTE(func_372(1, 5), false);
        MAP::SET_GPS_MULTI_ROUTE_RENDER(true);
      }
    }
  }
  else
  {
    MAP::CLEAR_GPS_MULTI_ROUTE();
    func_1270();
    func_1206(&iLocal_138);
  }
}