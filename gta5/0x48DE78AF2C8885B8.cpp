// am_pi_menu.ysc @ L414936
int func_5946(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
  {
    iVar0 = NETWORK::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT();
    if (iVar0 > 0)
    {
      iVar1 = 0;
      while (iVar1 < iVar0)
      {
        NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Global_2518183, iVar1);
        if (iParam0 == Global_2518183)
        {
          return 1;
        }
        iVar1++;
      }
    }
  }
  return 0;
}