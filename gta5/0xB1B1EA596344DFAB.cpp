// franklin1.ysc @ L110306
void func_657(int iParam0, var uParam1)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    PED::REMOVE_PED_PREFERRED_COVER_SET(iParam0);
    if (ITEMSET::IS_ITEMSET_VALID(*uParam1))
    {
      ITEMSET::DESTROY_ITEMSET(*uParam1);
    }
  }
}