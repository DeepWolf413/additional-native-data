// am_casino_peds.ysc @ L368736
void func_5357(int* iParam0)
{
  while (!NETWORK::_NETWORK_IS_THIS_SCRIPT_MARKED(32, false, Global_1316922))
  {
    SYSTEM::WAIT(0);
  }
  Global_1316922++;
  func_5358(0, -1, 0);
  NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(iParam0, 119);
}