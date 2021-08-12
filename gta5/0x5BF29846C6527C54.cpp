// am_armwrestling.ysc @ L125375
void func_1303()
{
  int iVar0;
  int iVar1;
  
  if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    return;
  }
  iVar0 = NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS();
  iVar1 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_968149, NETWORK::GET_NETWORK_TIME()));
  STATS::_0x5BF29846C6527C54(Global_4456448, &(Global_4456448.f_85822), iVar0, iVar1, Global_968149.f_1);
  func_1304();
}