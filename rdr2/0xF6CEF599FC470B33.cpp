// braithwaites1.ysc @ L78776
void func_1815(bool bParam0)
{
  if (bParam0)
  {
    MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(func_525(65), 0, -1, joaat("COLOR_OBJECTIVE"), false, true);
  }
  else
  {
    MAP::CLEAR_GPS_CUSTOM_ROUTE();
  }
  MAP::SET_GPS_CUSTOM_ROUTE_RENDER(bParam0, 3, 30);
}