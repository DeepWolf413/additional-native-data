// am_mp_bunker.ysc @ L336666
int func_5416()
{
  if (!func_5417(iLocal_5191))
  {
    return 0;
  }
  if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) == 0)
  {
    return 0;
  }
  if (func_149(&uLocal_5198) && !func_147(&uLocal_5198, 1000, 1))
  {
    return 0;
  }
  if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
  {
    return 0;
  }
  if (Global_1695666)
  {
    return 0;
  }
  if (func_274(0))
  {
    return 0;
  }
  return 1;
}