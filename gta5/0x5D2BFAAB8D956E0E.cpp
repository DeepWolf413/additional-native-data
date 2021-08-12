// freemode.ysc @ L150400
void func_1886()
{
  if (Global_2553486.f_85)
  {
    if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2553486.f_86)) > 250)
    {
      Global_2553486.f_85 = 0;
      AUDIO::_0x5D2BFAAB8D956E0E();
    }
  }
}