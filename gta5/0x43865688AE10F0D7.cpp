// main.ysc @ L3076
void func_98()
{
  if (NETWORK::NETWORK_IS_SIGNED_IN())
  {
    if (!MISC::IS_BIT_SET(Global_112293.f_20116.f_290, 8))
    {
      if (NETWORK::_FACEBOOK_IS_AVAILABLE())
      {
        if (HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO() >= 0.975f)
        {
          NETWORK::_FACEBOOK_SET_MILESTONE_COMPLETE(5);
          func_99(5);
          MISC::SET_BIT(&(Global_112293.f_20116.f_290), 8);
        }
      }
    }
  }
}