// fmmc_launcher.ysc @ L523552
void func_8172(var uParam0)
{
  if (uParam0->f_59 == 1)
  {
    if (NETWORK::NETWORK_IS_IN_TRANSITION())
    {
      if (!NETWORK::NETWORK_IS_TRANSITION_OPEN_TO_MATCHMAKING())
      {
        NETWORK::NETWORK_OPEN_TRANSITION_MATCHMAKING();
      }
    }
  }
  uParam0->f_59 = 0;
  func_8175();
  if (func_8174())
  {
    if (NETWORK::NETWORK_IS_IN_TRANSITION() && NETWORK::NETWORK_IS_TRANSITION_HOST())
    {
      NETWORK::_0x973D76AA760A6CB6(false);
    }
    func_8173();
  }
}