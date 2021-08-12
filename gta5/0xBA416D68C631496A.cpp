// fmmc_launcher.ysc @ L634959
void func_10663()
{
  if (Global_262145.f_4682)
  {
    if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && NETWORK::NETWORK_IS_HOST())
    {
      if (NETWORK::NETWORK_SESSION_IS_VISIBLE())
      {
        NETWORK::NETWORK_SESSION_MARK_VISIBLE(false);
      }
    }
  }
}