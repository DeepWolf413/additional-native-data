// armenian2.ysc @ L8705
void func_136(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    TASK::SET_SEQUENCE_TO_REPEAT(iLocal_2270, true);
  }
  TASK::CLOSE_SEQUENCE_TASK(iLocal_2270);
  if (!PED::IS_PED_INJURED(iParam0))
  {
    TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_2270);
  }
  TASK::CLEAR_SEQUENCE_TASK(&iLocal_2270);
}