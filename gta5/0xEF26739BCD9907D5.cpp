// fmmc_launcher.ysc @ L592564
void func_9411()
{
  struct<13> Var0;
  
  if (Global_2453009.f_697 == 0)
  {
    if (Global_4456448.f_86085 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_85558)))
    {
      Var0 = { func_4608(&(Global_4456448.f_85558)) };
      NETWORK::NETWORK_SET_TRANSITION_CREATOR_HANDLE(&Var0);
    }
    else
    {
      NETWORK::NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE();
    }
    Global_2453009.f_697 = 1;
  }
}