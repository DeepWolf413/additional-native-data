// abigail2_1.ysc @ L76680
void func_2191(int iParam0, int iParam1)
{
  int iVar0;

  if (!func_452(iParam0))
  {
    return;
  }
  iVar0 = Global_1360165[iParam0 /*1157*/];
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iVar0))
    {
      DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
    }
  }
}