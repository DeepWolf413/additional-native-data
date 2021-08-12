// maintransition.ysc @ L275314
void func_3689()
{
  int iVar0;
  bool bVar1;
  
  iVar0 = 0;
  while (iVar0 <= 31)
  {
    bVar1 = iVar0;
    if (func_4376(bVar1, 0, 0))
    {
      if (NETWORK::NETWORK_SESSION_GET_KICK_VOTE(bVar1))
      {
        Global_1619390[PLAYER::PLAYER_ID() /*100*/].f_33[iVar0] = 1;
        Global_1619390[PLAYER::PLAYER_ID() /*100*/][iVar0] = 1;
      }
    }
    iVar0++;
  }
}