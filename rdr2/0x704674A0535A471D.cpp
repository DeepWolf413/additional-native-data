// abigail2_1.ysc @ L69505
void func_1952(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;

  ENTITY::IS_ENTITY_DEAD(Global_35);
  *iParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
  *iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
  *iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
  *iParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
  *iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
  *iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
  *iParam1 += 6;
  iVar0 = func_575(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
  iVar1 = func_575(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
  iVar2 = func_575(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
  *iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}