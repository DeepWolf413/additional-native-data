// am_mp_property_int.ysc @ L532690
int func_8206()
{
  int iVar0;
  struct<13> Var1;
  
  func_1375(PLAYER::PLAYER_ID(), &Var1);
  if (func_4012(Var1))
  {
    if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var1))
    {
      iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var1);
    }
  }
  return iVar0;
}