// fm_hideout_controler.ysc @ L150815
void func_1671(struct<2> Param0)
{
  if (Param0.f_1)
  {
    if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Param0)) >= 1000)
    {
      NETWORK::NETWORK_SET_MISSION_FINISHED();
    }
  }
  SCRIPT::TERMINATE_THIS_THREAD();
}