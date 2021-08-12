// fmmc_launcher.ysc @ L634338
int func_10629()
{
  if ((((!Global_262145.f_4689 && NETWORK::NETWORK_IS_IN_TRANSITION()) && NETWORK::NETWORK_IS_TRANSITION_STARTED()) && NETWORK::NETWORK_IS_TRANSITION_HOST()) && NETWORK::_0x617F49C2668E6155() > 0)
  {
    if (!func_5(&(Local_17662.f_27)))
    {
      func_4(&(Local_17662.f_27), 0, 0);
      return 0;
    }
    else if (func_76(&(Local_17662.f_27), Global_262145.f_4688, 0))
    {
      return 1;
    }
  }
  else if (func_5(&(Local_17662.f_27)))
  {
    func_73(&(Local_17662.f_27));
  }
  return 0;
}