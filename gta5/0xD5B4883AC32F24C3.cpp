// am_armwrestling.ysc @ L124509
void func_1242(float fParam0)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
    NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(false);
  }
}