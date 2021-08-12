// ingamehud.ysc @ L113145
int func_1026()
{
  if (!NETWORK::NETWORK_IS_SESSION_BUSY())
  {
    if (((func_835() == 5 || func_835() == 60) || func_835() == 2) || func_487() == 0)
    {
      if (func_1027())
      {
        if ((func_5() && DLC::GET_IS_LOADING_SCREEN_ACTIVE()) || (func_826() && DLC::GET_IS_LOADING_SCREEN_ACTIVE() == 0))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}