// freemode.ysc @ L665295
void func_9466(var uParam0)
{
  if (MISC::IS_ORBIS_VERSION())
  {
    if (Global_2465692 == 0)
    {
      if (!func_497() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
      {
        if (func_546(uParam0, 2000, 0))
        {
          if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -1, true) == 0)
          {
            NETWORK::_0x6BFF5F84102DF80A(PLAYER::PLAYER_ID());
          }
          Global_2465692 = 1;
        }
      }
    }
  }
}