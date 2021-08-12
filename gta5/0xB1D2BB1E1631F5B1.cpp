// stock_controller.ysc @ L195
void func_4()
{
  int iVar0;
  
  if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
  {
    if (Global_59270)
    {
      Global_59270 = 0;
      Global_59271 = MISC::GET_GAME_TIMER();
      Global_62083 = 1;
    }
    return;
  }
  if (Global_59270)
  {
    if (!STATS::_0xB1D2BB1E1631F5B1())
    {
      iVar0 = func_5();
      Global_59270 = 0;
      if (iVar0 < 5)
      {
        Global_62083 = 0;
      }
    }
  }
}