// am_mp_arcade_strength_test.ysc @ L7021
void func_239(float fParam0)
{
  if (Local_164.f_105.f_2 <= 0.01f && fParam0 == 0.01f)
  {
    Local_164.f_105.f_2 = 0f;
  }
  else if (Local_164.f_105.f_2 < fParam0)
  {
    Local_164.f_105.f_2 = (Local_164.f_105.f_2 + 0.003f);
  }
  else if (Local_164.f_105.f_2 > fParam0)
  {
    Local_164.f_105.f_2 = (Local_164.f_105.f_2 - 0.003f);
  }
  if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
  {
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "Weight", Local_164.f_105.f_2);
  }
}