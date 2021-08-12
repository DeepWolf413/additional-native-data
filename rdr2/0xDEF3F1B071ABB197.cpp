// abigail2_1.ysc @ L85009
bool func_2547(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return false;
  }
  if (DECORATOR::DECOR_EXIST_ON(iParam0, "PedSeatedForMinigame"))
  {
    return DECORATOR::DECOR_GET_BOOL(iParam0, "PedSeatedForMinigame");
  }
  return false;
}