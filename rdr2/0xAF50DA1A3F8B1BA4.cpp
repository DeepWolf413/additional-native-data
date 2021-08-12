// startup.ysc @ L9839
bool func_344()
{
  var uVar0;

  if (!NETWORK::_0x2A8112A974DE1EF6())
  {
    return false;
  }
  if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
  {
    return false;
  }
  if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&uVar0))
  {
    return false;
  }
  return true;
}