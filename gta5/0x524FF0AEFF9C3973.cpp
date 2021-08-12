// fm_bj_race_controler.ysc @ L285845
void func_3886()
{
  if (PAD::IS_CONTROL_PRESSED(2, 79) || PAD::IS_CONTROL_PRESSED(2, 231))
  {
    NETWORK::NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(true);
  }
  else
  {
    NETWORK::NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(false);
  }
}