// ingamehud.ysc @ L110945
int func_957(int iParam0)
{
  if (MISC::IS_PC_VERSION() == 0)
  {
    if ((iParam0 == PAD::GET_LOCAL_PLAYER_AIM_STATE() || (iParam0 < 2 && PAD::GET_LOCAL_PLAYER_AIM_STATE() < 2)) || (iParam0 >= 2 && PAD::GET_LOCAL_PLAYER_AIM_STATE() >= 2))
    {
      return 1;
    }
  }
  else if ((iParam0 == PAD::_GET_LOCAL_PLAYER_AIM_STATE_2() || (iParam0 < 2 && PAD::_GET_LOCAL_PLAYER_AIM_STATE_2() < 2)) || (iParam0 >= 2 && PAD::_GET_LOCAL_PLAYER_AIM_STATE_2() >= 2))
  {
    return 1;
  }
  return 0;
}