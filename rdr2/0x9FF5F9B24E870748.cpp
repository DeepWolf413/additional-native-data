// act_hunting_2.ysc @ L21208
void func_574(int iParam0, bool bParam1, bool bParam2)
{
  if (bParam1)
  {
    if (TASK::_0x9FF5F9B24E870748(Local_15.f_307[iParam0]))
    {
      TASK::CLEAR_PED_TASKS(Local_15.f_307[iParam0], bParam2, false);
    }
  }
  TASK::CLEAR_SEQUENCE_TASK(&(Local_15.f_341[iParam0]));
  TASK::OPEN_SEQUENCE_TASK(&(Local_15.f_341[iParam0]));
}