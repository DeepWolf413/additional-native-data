// appinternet.ysc @ L287077
void func_2776()
{
  int iVar0;
  
  iVar0 = MISC::GET_GAME_TIMER();
  if (iVar0 > (Global_59271 + 120000) || Global_59271 == -1)
  {
    if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
    {
      Global_62083 = 1;
      return;
    }
    if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
    {
      Global_62083 = 1;
      return;
    }
    if (!Global_59270)
    {
      if (STATS::_0x5A556B229A169402())
      {
        Global_59271 = iVar0;
        Global_59270 = 1;
      }
    }
  }
}