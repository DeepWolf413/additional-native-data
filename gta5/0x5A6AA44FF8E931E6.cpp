// freemode.ysc @ L1166810
void func_20444()
{
  if (func_20360())
  {
    return;
  }
  if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
  {
    if (((NETWORK::NETWORK_SESSION_GET_PRIVATE_SLOTS() > 0 || unk_0xC33B9889A311ABB0()) || NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS()) || ((NETWORK::NETWORK_SESSION_IS_CLOSED_CREW() || NETWORK::NETWORK_SESSION_IS_SOLO()) && Global_1312861 != 8))
    {
      Global_2453009.f_744 = 1;
    }
    else if (func_20445())
    {
      Global_2453009.f_744 = 1;
    }
    else
    {
      Global_2453009.f_744 = 0;
    }
  }
  else if (((NETWORK::NETWORK_IS_TRANSITION_CLOSED_FRIENDS() || NETWORK::NETWORK_IS_TRANSITION_CLOSED_CREW()) || NETWORK::NETWORK_IS_TRANSITION_PRIVATE()) || NETWORK::NETWORK_IS_TRANSITION_SOLO())
  {
    Global_2453009.f_744 = 1;
  }
}