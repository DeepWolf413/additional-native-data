// bjack_sp.ysc @ L25421
bool func_867(var uParam0, char* sParam1)
{
  if (!uParam0->f_20)
  {
    if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, sParam1))
    {
      uParam0->f_20 = 1;
    }
  }
  return (uParam0->f_20 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0));
}