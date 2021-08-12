// freemode.ysc @ L665316
void func_9467(var uParam0, var uParam1)
{
  if (NETWORK::_0x14922ED3E38761F0())
  {
    if (!func_497())
    {
      if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
      {
        if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
        {
          if (*uParam1 == 0 || func_546(uParam0, 300000, 0))
          {
            func_2111("TICKER_QUEUE", 0);
            *uParam1 = 1;
          }
        }
      }
    }
  }
  else
  {
    *uParam1 = 0;
  }
}