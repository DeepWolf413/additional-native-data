// finale1.ysc @ L40694
bool func_878(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 8)
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_862[iVar0 /*8*/]))
    {
      TASK::CLEAR_PED_TASKS(Local_862[iVar0 /*8*/], true, false);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_862[iVar0 /*8*/], true);
      TASK::TASK_AIM_GUN_AT_ENTITY(Local_862[iVar0 /*8*/], Global_35, -1, false, 1);
    }
    iVar0++;
  }
  func_184(Global_35, 0);
  func_1391(1);
  PED::_0x949B2F9ED2917F5D(Global_35, 10);
  PED::_0xBBF6D1D07C02D00A(Global_35, 10);
  PED::SET_PED_CONFIG_FLAG(Global_35, 213, false);
  OBJECT::_0xDE116ECFFDD4B997(Local_225[3 /*9*/], 0);
  return uParam0->f_607 == uParam0->f_607;
}