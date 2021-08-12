// am_challenges.ysc @ L23951
void func_697()
{
  if (Local_2595[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
  {
    if (!MISC::IS_BIT_SET(iLocal_319, 8))
    {
      if ((!func_7(PLAYER::PLAYER_ID()) && !func_166(PLAYER::PLAYER_ID())) && !func_406(PLAYER::PLAYER_ID()))
      {
        func_405();
      }
    }
    else if (!MISC::IS_BIT_SET(iLocal_319, 9))
    {
      if ((func_7(PLAYER::PLAYER_ID()) || func_166(PLAYER::PLAYER_ID())) || func_406(PLAYER::PLAYER_ID()))
      {
        STATS::_0xA761D4AC6115623D();
        Local_2595[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = 0;
        MISC::SET_BIT(&iLocal_319, 9);
      }
    }
  }
}