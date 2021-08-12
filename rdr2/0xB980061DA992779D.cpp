// abigail2_1.ysc @ L34966
int func_790(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
  int iVar0;

  iVar0 = joaat("WEAPON_UNARMED");
  if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
  {
    return iVar0;
  }
  if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
  {
    return iVar0;
  }
  return iVar0;
}