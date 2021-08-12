// abigail1.ysc @ L34287
bool func_216(int iParam0, int iParam1)
{
  bool bVar0;
  
  if (iParam0 == PLAYER::PLAYER_ID())
  {
    bVar0 = func_217(-1, 0) == 8;
  }
  else
  {
    bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
  }
  if (iParam1 == 1)
  {
    if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
    {
      bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
    }
  }
  return bVar0;
}