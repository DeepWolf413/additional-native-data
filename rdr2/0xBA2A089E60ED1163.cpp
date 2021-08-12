// ambush_bnd_cliff1.ysc @ L8203
int func_305(int iParam0, int iParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
  {
    return ENTITY::_0xBA2A089E60ED1163(iParam1, iParam0, joaat("CURRENCY_CASH"), 0, 0);
  }
  if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
  {
    return 0;
  }
  *iParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
  return 1;
}