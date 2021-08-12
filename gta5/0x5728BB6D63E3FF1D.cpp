// fmmc_launcher.ysc @ L334500
void func_4854(bool bParam0)
{
  struct<13> Var0;
  
  if (bParam0)
  {
    Var0 = { func_708() };
    func_4918(&Var0, 1);
    NETWORK::NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(&Var0);
    MISC::SET_BIT(&(Global_2453903.f_1.f_2809), 2);
    func_4917();
    func_4916();
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_2453903.f_1.f_2809), 2);
  }
  func_4855(45, Global_2453903.f_1.f_2809, 0);
}