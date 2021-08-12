// fm_maintain_transition_players.ysc @ L4228
void func_146(int iParam0)
{
  if (iLocal_1091 == 1)
  {
    func_11(0);
    if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_8(), -1, true, 0))
    {
      if (func_285())
      {
        BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
        BRAIN::DISABLE_SCRIPT_BRAIN_SET(4);
        BRAIN::ENABLE_SCRIPT_BRAIN_SET(2);
        BRAIN::ENABLE_SCRIPT_BRAIN_SET(8);
        func_148(0);
        iLocal_1091 = 0;
      }
    }
  }
  else if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_147()) && func_17())
  {
    func_11(0);
    func_6(iParam0->f_3);
    iLocal_1091 = 1;
  }
}