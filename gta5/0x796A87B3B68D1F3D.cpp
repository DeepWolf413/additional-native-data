// director_mode.ysc @ L124731
int func_850(int* iParam0)
{
  if (!iLocal_13725)
  {
    if (NETWORK::FILLOUT_PM_PLAYER_LIST(iParam0, 1, 106))
    {
      NETWORK::REFRESH_PLAYER_LIST_STATS(106);
      iLocal_13725 = 1;
    }
    else
    {
      return 0;
    }
  }
  else if (NETWORK::REFRESH_PLAYER_LIST_STATS(106))
  {
    if (NETWORK::NETWORK_CHECK_DATA_MANAGER_SUCCEEDED_FOR_HANDLE(106, iParam0[0 /*13*/]))
    {
      NETWORK::NETWORK_SET_CURRENT_DATA_MANAGER_HANDLE(iParam0[0 /*13*/]);
      bLocal_13875 = true;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return 0;
}