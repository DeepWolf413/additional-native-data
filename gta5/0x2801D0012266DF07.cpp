// tuner_sandbox_activity.ysc @ L36913
void func_915(bool bParam0)
{
  int iVar0;
  
  if (bParam0)
  {
    if (!func_14(7))
    {
      PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
      iVar0 = PATHFIND::GET_NEXT_GPS_DISABLED_ZONE_INDEX();
      if (iVar0 != -1)
      {
        PATHFIND::SET_GPS_DISABLED_ZONE_AT_INDEX(960.7706f, -1569.272f, 29.68589f, 941.351f, -1582.071f, 29.2727f, iVar0);
        Local_223.f_52 = iVar0;
      }
      func_497(7);
    }
  }
  else if (func_14(7))
  {
    PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
    if (Local_223.f_52 != -1)
    {
      PATHFIND::CLEAR_GPS_DISABLED_ZONE_AT_INDEX(Local_223.f_52);
      Local_223.f_52 = -1;
    }
    func_496(7);
  }
}