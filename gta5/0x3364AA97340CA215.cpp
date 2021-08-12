// act_cinema.ysc @ L120060
void func_1249()
{
  int iVar0;
  
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
    func_1251(0, -1, 0);
    NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_280, 35);
    NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_315, 65);
    iVar0 = 0;
    while (iVar0 < 32)
    {
      Local_280[iVar0] = -1;
      iVar0++;
    }
    MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
    if (!func_1250())
    {
      func_1235();
    }
    bLocal_230 = true;
  }
  else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(131))
  {
    func_1235();
  }
}