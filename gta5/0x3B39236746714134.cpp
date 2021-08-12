// arena_carmod.ysc @ L906
void func_3()
{
  if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    return;
  }
  if (!NETWORK::_0xB37E4E6A2388CA7B())
  {
    if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
    {
      if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
      {
        if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()) == Local_722.f_115.f_32)
        {
          func_5();
        }
      }
      else if (MISC::IS_BIT_SET(iLocal_2020, 26))
      {
        if (MISC::GET_GAME_TIMER() > iLocal_2021)
        {
          func_4();
        }
      }
      else
      {
        iLocal_2021 = MISC::GET_GAME_TIMER() + 3000;
        MISC::SET_BIT(&iLocal_2020, 26);
      }
    }
  }
}