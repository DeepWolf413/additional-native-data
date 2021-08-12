// loanshark_undertaker.ysc @ L37805
void func_1206(int iParam0, bool bParam1)
{
  TASK::TASK_CLEAR_LOOK_AT(Local_1318[iParam0 /*97*/]);
  PED::SET_PED_CAN_HEAD_IK(Local_1318[iParam0 /*97*/], true);
  TASK::TASK_LOOK_AT_ENTITY(Local_1318[iParam0 /*97*/], Global_35, 8000, 16, 51, 0);
  if (!bParam1)
  {
    TASK::TASK_CLEAR_LOOK_AT(Local_1318[iParam0 /*97*/]);
    PED::SET_PED_CAN_HEAD_IK(Local_1318[iParam0 /*97*/], false);
  }
}