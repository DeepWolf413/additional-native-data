// abigail2_1.ysc @ L64452
void func_1754(int iParam0, bool bParam1, char* sParam2)
{
  int iVar0;

  iVar0 = func_456(iParam0);
  if (!func_452(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
  {
    return;
  }
  PED::_0xF1C03A5352243A30(iVar0);
  if (bParam1)
  {
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
  }
  else
  {
    TASK::CLEAR_PED_TASKS(iVar0, true, false);
  }
}