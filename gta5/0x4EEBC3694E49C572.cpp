// fm_capture_creator.ysc @ L10677
void func_99(bool bParam0)
{
  if (bParam0)
  {
    if (NETWORK::NETWORK_CAN_SESSION_END() == 0)
    {
      func_106(2);
      Global_1312879 = 0;
      Global_1312878 = bParam0;
    }
  }
  else if (NETWORK::NETWORK_CAN_SESSION_END())
  {
    if (func_101() == 0)
    {
      NETWORK::_0xB9351A07A0D458B1(0);
    }
    func_100();
    Global_1312879 = 1;
    Global_1312878 = bParam0;
  }
  if (bParam0 == 0)
  {
    if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() == 0 || NETWORK::NETWORK_IS_SIGNED_IN() == 0) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() == 0)
    {
      Global_1312879 = 1;
      Global_1312878 = bParam0;
    }
  }
}