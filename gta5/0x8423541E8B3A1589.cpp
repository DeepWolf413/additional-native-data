// am_mp_arcade_strength_test.ysc @ L982
void func_46()
{
  if (MISC::IS_BIT_SET(Local_164.f_1, 30))
  {
    if (func_4(PLAYER::GET_PLAYER_PED(Local_164.f_175)) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::GET_PLAYER_PED(Local_164.f_175)))
    {
      MISC::CLEAR_BIT(&(Local_164.f_1), 30);
      MISC::SET_BIT(&(Local_164.f_2), 6);
      TASK::_0x8423541E8B3A1589(PLAYER::GET_PLAYER_PED(Local_164.f_175), Local_164.f_175.f_1, Local_164.f_175.f_2);
      if (PLAYER::PLAYER_ID() == Local_164.f_175)
      {
        MISC::SET_BIT(&(Local_164.f_2), 0);
      }
    }
  }
}