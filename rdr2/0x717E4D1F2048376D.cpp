// bathing.ysc @ L2943
bool func_64(int iParam0, char* sParam1, bool bParam2)
{
  if (iParam0->f_15)
  {
    if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
    {
      if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam1) == bParam2)
      {
        return true;
      }
    }
  }
  else if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_20), "TESTBLOCK"))
  {
    if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
    {
      if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam1) == bParam2)
      {
        return true;
      }
    }
  }
  else if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iLocal_64))
  {
    if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam1) == bParam2 && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iLocal_64), sParam1) == bParam2)
    {
      return true;
    }
  }
  return false;
}