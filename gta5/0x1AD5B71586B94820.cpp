// am_casino_limo.ysc @ L1260
int func_22()
{
  int iVar0;
  bool bVar1;
  
  if (func_35(1))
  {
    iVar0 = 0;
    while (iVar0 < 7)
    {
      bVar1 = func_32(func_34(), iVar0);
      if (((bVar1 != func_31() && func_646(bVar1, 0, 1)) && func_29(bVar1)) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(bVar1, func_24(181), func_23()))
      {
        return 0;
      }
      iVar0++;
    }
  }
  return 1;
}