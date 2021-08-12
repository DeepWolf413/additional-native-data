// am_mp_peds.ysc @ L96340
void func_1336(struct<3> Param0)
{
  if (func_687() == 2)
  {
    MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    return;
  }
  if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    func_1262(Param0.x);
  }
  while (!NETWORK::_NETWORK_IS_THIS_SCRIPT_MARKED(32, false, Param0.f_2))
  {
    SYSTEM::WAIT(0);
  }
  func_1338(0, -1, 0);
  NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_7843, 719);
  if (!func_1337())
  {
    func_1262(Param0.x);
  }
  MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}