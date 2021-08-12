// dominoes_launch_sp.ysc @ L11452
bool func_256(int iParam0)
{
  if (PED::IS_PED_INJURED(iParam0))
  {
    return false;
  }
  else if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam0))
  {
    return false;
  }
  if (TASK::_GET_TASK_MOVE_NETWORK_ID(iParam0) != joaat("SCRIPT_MINI_GAME_DOMINOES"))
  {
    return false;
  }
  return TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iParam0);
}