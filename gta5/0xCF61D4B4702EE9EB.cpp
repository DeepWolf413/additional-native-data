// am_challenges.ysc @ L25616
int func_781(struct<21> Param0)
{
  int iVar0;
  
  func_790(func_791(Param0), Param0);
  NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(func_789(9));
  NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_788(9));
  func_785(0, -1, 0);
  func_783(133);
  NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_628, 88);
  NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_2595, 385);
  if (!func_782())
  {
    func_743();
  }
  if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    STATS::_0x6DEE77AFF8C21BD1(&(Local_628.f_52), &(Local_628.f_53));
  }
  Local_2980.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
  MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
  iVar0 = 0;
  while (iVar0 < 10)
  {
    iLocal_615[iVar0] = -1;
    iVar0++;
  }
  return 1;
}