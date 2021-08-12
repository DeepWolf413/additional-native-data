// fm_maintain_transition_players.ysc @ L3723
int func_120()
{
  var uVar0;
  int iVar13;
  
  NETWORK::NETWORK_GET_TRANSITION_HOST(&uVar0);
  if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
  {
    iVar13 = 0;
    while (iVar13 <= (Global_2453903.f_1.f_2805 - 1))
    {
      if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2453903.f_1.f_845[iVar13 /*57*/]), 13))
      {
        if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_2453903.f_1.f_845[iVar13 /*57*/]), &uVar0))
        {
          return iVar13;
        }
      }
      iVar13++;
    }
  }
  return 0;
}