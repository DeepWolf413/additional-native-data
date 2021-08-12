// act_cinema.ysc @ L118153
int func_1157()
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (func_1159(1) >= Global_262145.f_3949 || MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_3949, false, true, false, -1, 0))
    {
      return 1;
    }
  }
  else if (func_1158(func_431()) >= (20 * iLocal_229))
  {
    return 1;
  }
  return 0;
}