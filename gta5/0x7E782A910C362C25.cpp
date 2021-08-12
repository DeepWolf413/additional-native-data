// maintransition.ysc @ L276068
int func_3722(var uParam0)
{
  if (NETWORK::NETWORK_CAN_ENTER_MULTIPLAYER() == 0)
  {
    return 0;
  }
  if (NETWORK::NETWORK_IS_MULTIPLAYER_DISABLED())
  {
    return 0;
  }
  if (func_4349() == 0 && func_739() == 0)
  {
    return 0;
  }
  func_3723(uParam0->f_352);
  if (func_36() != 21)
  {
    func_4302(0);
    func_572(999);
    func_4340(5);
  }
  return 0;
}