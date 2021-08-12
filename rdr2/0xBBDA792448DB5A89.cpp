// abigail21_outro.ysc @ L1780
float func_88()
{
  int iVar0;

  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
    return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
  }
  return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}