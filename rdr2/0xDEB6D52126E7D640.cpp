// abigail2_1.ysc @ L27736
bool func_531(int iParam0)
{
  int iVar0;

  iParam0 = func_258(iParam0);
  if (iParam0 == -1)
  {
    return false;
  }
  if (iParam0 >= 7)
  {
    return false;
  }
  if (!func_524(iParam0))
  {
    return false;
  }
  iVar0 = func_208(iParam0);
  if (ENTITY::IS_ENTITY_DEAD(iVar0))
  {
    return false;
  }
  if (TASK::IS_PED_IN_WRITHE(iVar0))
  {
    return true;
  }
  return false;
}