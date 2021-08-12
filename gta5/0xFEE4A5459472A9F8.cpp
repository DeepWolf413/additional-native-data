// freemode.ysc @ L1021540
void func_16097()
{
  if (Global_2405077.f_2463 == 1)
  {
    if (Global_2405077.f_2472 == SCRIPT::GET_ID_OF_THIS_THREAD())
    {
      if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405077.f_2469) > func_1630(0) + 2000)
      {
        NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
        PED::SPAWNPOINTS_CANCEL_SEARCH();
        func_1455();
        Global_2405077.f_2463 = 0;
      }
    }
  }
}