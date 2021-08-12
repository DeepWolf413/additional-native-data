// fm_hold_up_tut.ysc @ L9292
void func_301()
{
  PATHFIND::_SET_IGNORE_SECONDARY_ROUTE_NODES(false);
  func_25();
  func_24(8, 0);
  NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
  if (func_287(PLAYER::PLAYER_ID()))
  {
    func_269(0);
  }
  func_302();
}