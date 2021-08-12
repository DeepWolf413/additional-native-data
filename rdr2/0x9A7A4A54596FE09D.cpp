// winter1.ysc @ L101990
bool func_2946()
{
  if (ANIMSCENE::_0xB89FCFF19DAFFF28(uLocal_182[25], "ARTHUR") || ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_182[25], "ARTHUR"))
  {
    TASK::TASK_LEAD_HORSE(Global_35, Local_14.f_3[0]);
    PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
    return true;
  }
  return false;
}