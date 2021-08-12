// camp_beaverhollow.ysc @ L2594
void func_72(int iParam0, int iParam1)
{
  if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    func_57();
  }
  NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}