// beat_hunter.ysc @ L4907
void func_162()
{
  int iVar0;

  PED::SET_PED_USING_ACTION_MODE(uLocal_225[0], false, -1, 0);
  PED::_0x58F7DB5BD8FA2288(uLocal_225[0]);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  if (Local_208.f_5 != joaat("A_C_BUCK_01"))
  {
    TASK::TASK_LOOT_ENTITY(0, uLocal_225[1]);
  }
  if (Local_208.f_5 != joaat("A_C_BEAR_01"))
  {
    if (Local_208.f_5 == joaat("A_C_BUCK_01") || Local_208.f_5 == joaat("A_C_RABBIT_01"))
    {
      TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, uLocal_225[1]);
    }
  }
  func_54(uLocal_225[0], &iVar0, 0, 0, 1, 1);
  iLocal_408 = 3;
  if (func_88(Local_231[0 /*32*/].f_11, 0, 1) && !func_51(Global_35, Local_231[0 /*32*/].f_11, 0))
  {
    TASK::TASK_GO_TO_WHISTLE(Local_231[0 /*32*/].f_11, uLocal_225[0], 0);
  }
}