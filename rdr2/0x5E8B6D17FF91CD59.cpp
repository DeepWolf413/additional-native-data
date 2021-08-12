// aberdeenpigfarm.ysc @ L199
void func_1()
{
  int iVar0;

  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
    AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
  }
  else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
  {
    if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
    {
    }
    iVar0 = 0;
    while (!func_42(iVar0))
    {
      iVar0++;
      BUILTIN::WAIT(0);
    }
    SCRIPTS::TERMINATE_THIS_THREAD();
  }
}