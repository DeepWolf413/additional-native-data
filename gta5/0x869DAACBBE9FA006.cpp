// taxi_procedural.ysc @ L7066
float func_217(struct<3> Param0, bool bParam3)
{
  int iVar0;
  
  if (bParam3)
  {
    if (PATHFIND::GET_GPS_BLIP_ROUTE_FOUND())
    {
      iVar0 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
    }
    else
    {
      iVar0 = SYSTEM::FLOOR(SYSTEM::VDIST(func_218(PLAYER::PLAYER_ID()), Param0));
    }
  }
  else
  {
    iVar0 = SYSTEM::FLOOR(SYSTEM::VDIST(func_218(PLAYER::PLAYER_ID()), Param0));
  }
  return func_166(SYSTEM::TO_FLOAT(iVar0));
}