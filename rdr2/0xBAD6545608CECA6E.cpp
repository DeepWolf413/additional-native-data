// beat_hunter.ysc @ L4775
void func_154(bool bParam0)
{
  int iVar0;

  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  if (bParam0)
  {
    if (func_132())
    {
      func_146(0, 2, 2f, -2f, -1, 0, 0, 0, 0, 0, 0);
    }
    TASK::TASK_AIM_GUN_AT_ENTITY(0, uLocal_225[1], 3000, false, 1);
  }
  if (func_88(Local_231[0 /*32*/].f_11, 0, 1))
  {
    func_53(0, 869278708, joaat("UNSPECIFIED"));
    TASK::TASK_MOUNT_ANIMAL(0, Local_231[0 /*32*/].f_11, -1, -1, 3f, 1, 0, 0);
    if (!func_51(Global_35, Local_231[0 /*32*/].f_11, 0))
    {
      TASK::TASK_GO_TO_WHISTLE(Local_231[0 /*32*/].f_11, uLocal_225[0], 0);
    }
  }
  func_54(uLocal_225[0], &iVar0, 0, 0, 1, 1);
  PED::SET_PED_COMBAT_MOVEMENT(uLocal_225[0], 2);
  PED::SET_PED_ACCURACY(uLocal_225[0], 85);
  PED::SET_PED_SHOOT_RATE(uLocal_225[0], 75);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_225[1], false);
  func_95(64);
  func_78(&uLocal_435, 0);
  func_130(7);
}