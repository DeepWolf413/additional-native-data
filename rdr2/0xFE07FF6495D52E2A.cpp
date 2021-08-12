// homeinvasion.ysc @ L52602
void func_1370(int iParam0, int iParam1)
{
  int iVar0;

  if (!func_159(*iParam0, 0, 1))
  {
    return;
  }
  if (func_275(2, iParam1, 0))
  {
    func_425(2, iParam1, 0);
  }
  if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
  {
    PED::SET_PED_CONFIG_FLAG(*iParam0, 234, true);
    PED::SET_PED_PANIC_EXIT_SCENARIO(*iParam0, Global_36);
  }
  func_1290(&(Local_268.f_5235[10 /*3*/]), 8f, 0);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
  func_1304(*iParam0, &iVar0, 0, 0, 1, 1);
  func_453(iParam0, &(iParam0->f_10), joaat("BLIP_STYLE_ENEMY"), 5);
  MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0->f_10, "HM_CJ_BLIP_DAD");
  func_1329(iParam0);
  func_319(4096, iParam1, 0);
}