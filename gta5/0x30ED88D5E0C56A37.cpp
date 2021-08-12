// am_mp_arcade_claw_crane.ysc @ L76950
int func_435(int* iParam0, int iParam1, int iParam2)
{
  if (func_436(iParam0, iParam2, 0) || MISC::IS_BIT_SET(*iParam0, 13))
  {
    if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iParam1))
    {
      return 1;
    }
  }
  return 0;
}