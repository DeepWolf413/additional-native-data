// startup.ysc @ L1651
bool func_60(var uParam0, int iParam1, bool bParam2)
{
  if (iParam1 == -1)
  {
    return true;
  }
  func_241(uParam0, bParam2, 0);
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
  {
    if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
    {
      func_59(uParam0);
      return true;
    }
  }
  else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
  {
    func_59(uParam0);
    return true;
  }
  return false;
}