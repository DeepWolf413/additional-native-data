// freemode.ysc @ L665274
void func_9465(var uParam0)
{
  if (MISC::IS_ORBIS_VERSION())
  {
    if (Global_2465693 == 0)
    {
      if (!func_497() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
      {
        if (func_546(uParam0, 3000, 0))
        {
          if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) == 0)
          {
            NETWORK::_0x5C497525F803486B();
          }
          Global_2465693 = 1;
        }
      }
    }
  }
}