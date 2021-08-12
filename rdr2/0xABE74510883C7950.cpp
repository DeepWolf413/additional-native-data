// abigail2_1.ysc @ L74367
void func_2133(struct<2> Param0, int iParam2)
{
  if (!func_247(Param0))
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
  {
    return;
  }
  if (!func_2132(Param0, iParam2))
  {
    ITEMSET::ADD_TO_ITEMSET(iParam2, Param0);
  }
}