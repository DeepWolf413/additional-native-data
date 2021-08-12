// dominoes_sp.ysc @ L22655
bool func_687(var uParam0, var uParam1)
{
  int iVar0;

  if (!func_511(uParam0))
  {
    return false;
  }
  iVar0 = func_153(uParam0);
  if (func_32() == -1)
  {
    *uParam1 = MISC::GET_HASH_KEY(TASK::GET_TASK_MOVE_NETWORK_STATE(iVar0));
  }
  else
  {
    *uParam1 = TASK::_0xE9A6400D1A0E7A55(iVar0);
  }
  return true;
}