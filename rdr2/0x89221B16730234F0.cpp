// braithwaites3.ysc @ L67880
void func_1694(int iParam0, float fParam1, float fParam2, int iParam3)
{
  if (func_394(iLocal_73, 1))
  {
    TASK::CLOSE_SEQUENCE_TASK(iLocal_648);
    func_470(&iLocal_73, 1);
  }
  if (iParam3 != -1)
  {
    TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(iParam0, iLocal_648, iParam3, 0);
  }
  else if (fParam1 == -1f || fParam2 == -1f)
  {
    TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_648);
  }
  else
  {
    TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iLocal_648, fParam1, fParam2);
  }
  TASK::CLEAR_SEQUENCE_TASK(&iLocal_648);
}