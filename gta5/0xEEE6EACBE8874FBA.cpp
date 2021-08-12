// act_cinema.ysc @ L85906
int func_501(int iParam0, int iParam1)
{
  if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
  {
    Global_2518253 = { func_500(iParam0) };
    Global_2518266 = { func_500(iParam1) };
    if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2518253))
    {
      if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2518266))
      {
        NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518183, 35, &Global_2518253);
        NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518218, 35, &Global_2518266);
        if (Global_2518183 == Global_2518218)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}