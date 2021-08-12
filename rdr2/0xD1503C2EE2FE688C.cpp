// abigail2_1.ysc @ L74354
bool func_2132(struct<2> Param0, int iParam2)
{
  if (!func_247(Param0))
  {
    return false;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
  {
    return false;
  }
  return ITEMSET::IS_IN_ITEMSET(iParam2, Param0);
}