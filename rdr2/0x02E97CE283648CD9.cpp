// pausemenu_multiplayer.ysc @ L91
void func_3()
{
  func_4(4);
  func_6(2);
  if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_7(joaat("BENCHMARK"))))
  {
    Global_43893 = 1;
  }
  func_5(joaat("SINGLE_PLAYER"), 0);
}