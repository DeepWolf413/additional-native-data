// am_mp_defunct_base.ysc @ L385021
void func_6325()
{
  if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_SESSION_ACTIVE()) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    func_6326(&(Local_224.f_500), &Global_3932160);
  }
  func_4(&(Local_1026[PLAYER::PLAYER_ID() /*17*/].f_13), &(Local_3288.f_3460));
}