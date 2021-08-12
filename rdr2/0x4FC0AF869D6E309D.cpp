// abigail2_1.ysc @ L53582
void func_1400(int iParam0, float fParam1, float fParam2)
{
  if (func_381(iLocal_27, 1))
  {
    TASK::CLOSE_SEQUENCE_TASK(iLocal_158);
    func_1391(&iLocal_27, 1);
  }
  if (fParam1 == -1f || fParam2 == -1f)
  {
    TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_158);
  }
  else
  {
    TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iLocal_158, fParam1, fParam2);
  }
  TASK::CLEAR_SEQUENCE_TASK(&iLocal_158);
}