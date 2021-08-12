// discoverable_generic_corpse.ysc @ L28743
bool func_671()
{
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 2 || LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) > 25000)
  {
    return true;
  }
  return false;
}