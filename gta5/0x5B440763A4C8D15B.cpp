// fm_mission_controller_2020.ysc @ L437000
void func_7266(var uParam0, bool bParam1, bool bParam2, float fParam3)
{
  if (func_7267(bParam1, fParam3))
  {
    if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(*uParam0))
    {
      HUD::SET_BLIP_ROUTE(*uParam0, false);
    }
  }
  else if (Local_36110.f_40[bParam2] == 1)
  {
    if (bLocal_22086)
    {
      HUD::SET_BLIP_ROUTE(*uParam0, false);
    }
    else if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_23274[bParam1]))
    {
      HUD::SET_BLIP_ROUTE(*uParam0, true);
      if (MISC::IS_BIT_SET(Global_4718592.f_5[bParam1 /*273*/].f_88, 8))
      {
        HUD::SET_GPS_FLAGS(4, 0f);
      }
      else
      {
        HUD::SET_GPS_FLAGS(0, 0f);
      }
    }
  }
}