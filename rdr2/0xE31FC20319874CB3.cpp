// beat_poisoned.ysc @ L2840
void func_85(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
  {
    ENTITY::_0xE31FC20319874CB3(iParam0, 1, 0);
    ENTITY::_0xE31FC20319874CB3(iParam0, 1, 1);
    ENTITY::_0xE31FC20319874CB3(iParam0, 1, 2);
  }
  else
  {
    if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
    {
      DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
      DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
    }
    if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
    {
      DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
      DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
    }
  }
}