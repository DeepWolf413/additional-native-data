// clothes_shop_mp.ysc @ L272896
void func_1182(int iParam0)
{
  if (Global_4267014)
  {
    if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      if (iParam0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_4267015)) > 40000)
      {
        if (!Global_99422.f_1441 && !STATS::STAT_SAVE_PENDING_OR_REQUESTED())
        {
          if (func_763() && MISC::IS_PC_VERSION())
          {
          }
          else
          {
            if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
            {
              STATS::_0x5688585E6D563CD8(10);
            }
            func_1183(-264716935, 10, 0);
          }
          Global_4267015 = NETWORK::GET_NETWORK_TIME();
          Global_4267014 = 0;
        }
      }
    }
    else
    {
      func_699();
      Global_4267014 = 0;
    }
  }
}