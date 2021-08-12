// act_fishing01.ysc @ L21756
void func_603(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
  int iVar0;
  int iVar1;

  iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam1, iParam2);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
  {
    if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar1, false, iParam2, false))
    {
      sParam3 = func_964(iVar1);
    }
  }
  func_965(uParam0, iVar0, sParam3, iParam4, iParam5, 1);
}