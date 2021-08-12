// am_heli_taxi.ysc @ L10440
void func_267()
{
  float fVar0;
  
  if (HUD::IS_WAYPOINT_ACTIVE())
  {
    Local_160.f_10 = { HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID())) };
    Local_160.f_10.f_2 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA((Local_160.f_10 - 25f), (Local_160.f_10.f_1 - 25f), (Local_160.f_10 + 25f), (Local_160.f_10.f_1 + 25f));
    fVar0 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_AREA((Local_160.f_10 - 25f), (Local_160.f_10.f_1 - 25f), (Local_160.f_10 + 25f), (Local_160.f_10.f_1 + 25f));
    if ((Local_160.f_10.f_2 - fVar0) < 20f)
    {
      Local_160.f_10.f_2 = (Local_160.f_10.f_2 + 10f);
    }
    else if ((Local_160.f_10.f_2 - fVar0) > 30f && (Local_160.f_10.f_2 - fVar0) < 70f)
    {
      Local_160.f_10.f_2 = (Local_160.f_10.f_2 + 40f);
    }
    func_268(0);
    func_170(Local_160.f_10);
  }
}