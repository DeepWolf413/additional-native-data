// beat_del_lobo_posse.ysc @ L11007
void func_227(int iParam0, int iParam1, float fParam2)
{
  TASK::CLEAR_SEQUENCE_TASK(&iParam1);
  TASK::OPEN_SEQUENCE_TASK(&iParam1);
  if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
  {
    TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
  }
  else
  {
    TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
  }
  TASK::CLOSE_SEQUENCE_TASK(iParam1);
  TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iParam1, fParam2, fParam2);
  TASK::CLEAR_SEQUENCE_TASK(&iParam1);
  PED::_0x712B2C2B2471B493(iParam0, joaat("DISABLED"));
}