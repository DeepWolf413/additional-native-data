// ambient_fishing_scenario.ysc @ L40
void func_2()
{
  func_7();
  SCRIPTS::_0xE7282390542F570D(iLocal_2);
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    func_8();
  }
  else
  {
    SCRIPTS::TERMINATE_THIS_THREAD();
  }
}