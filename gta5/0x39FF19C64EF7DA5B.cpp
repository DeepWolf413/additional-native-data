// am_casino_peds.ysc @ L254615
void func_3139(var uParam0, var uParam1, var uParam2, var uParam3)
{
  if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
  {
    if (func_3140())
    {
      if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
      {
        PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
        PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
      }
    }
  }
}