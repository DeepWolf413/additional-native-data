// am_casino_limo.ysc @ L52676
int func_547()
{
  if (func_292())
  {
    if (!func_551(PLAYER::PLAYER_PED_ID(), func_7(), 1000f, 1))
    {
      return 1;
    }
    if (func_549(PLAYER::PLAYER_ID(), 1, 1))
    {
      return 1;
    }
    if (func_548(PLAYER::PLAYER_ID()))
    {
      return 1;
    }
    if (func_241(PLAYER::PLAYER_ID()))
    {
      return 1;
    }
  }
  else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_23()))
  {
    return 1;
  }
  return 0;
}