// player_menu.ysc @ L1259
void func_64(int iParam0, bool bParam1)
{
  var uVar0;

  uVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
  if (bParam1)
  {
    if (func_82())
    {
      return;
    }
    if (NETWORK::_0x981146E5C9CE9250(uVar0))
    {
      func_83(iParam0);
      func_84(0);
      func_85(0);
    }
  }
  else
  {
    NETWORK::_0x3AA0CDC63696166D(uVar0);
  }
}