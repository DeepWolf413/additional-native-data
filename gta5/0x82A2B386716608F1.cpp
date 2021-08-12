// freemode.ysc @ L793523
void func_11759()
{
  if (NETWORK::_NETWORK_SHOULD_SHOW_CONNECTIVITY_TROUBLESHOOTING())
  {
    if (!MISC::IS_BIT_SET(Global_2544210.f_1797, 12))
    {
      if (func_1668(0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1))
      {
        if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
        {
          if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
          {
            func_799("FM_NAT_STRCT", 20000);
            MISC::SET_BIT(&(Global_2544210.f_1797), 12);
          }
        }
      }
    }
  }
}