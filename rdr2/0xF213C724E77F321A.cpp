// ambush_bnd_ridge_ambush.ysc @ L8851
bool func_318(int iParam0, int iParam1)
{
  if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT((*iParam0)[iParam1]) || ENTITY::IS_ENTITY_VISIBLE((*iParam0)[iParam1]))
  {
    return true;
  }
  if (!func_132(iParam0, iParam1, 4))
  {
    return true;
  }
  return false;
}