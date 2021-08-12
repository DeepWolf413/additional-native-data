// abigail21_outro.ysc @ L679
void func_36(int iParam0, int iParam1, int iParam2, int iParam3)
{
  int iVar0;
  int iVar1;

  if (func_12(iParam0))
  {
    iVar1 = func_55(iParam0);
    if (!ENTITY::IS_ENTITY_DEAD(iVar1))
    {
      iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
      PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
      func_56(iParam0);
    }
  }
  if (func_35(iParam0, 5, 1))
  {
    PED::SET_PED_CONFIG_FLAG(func_55(iParam0), 137, true);
  }
}