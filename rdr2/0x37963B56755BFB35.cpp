// property_use_core.ysc @ L7596
int func_290(var uParam0, int iParam1)
{
  int iVar0;

  if (iParam1 < 0)
  {
    return 0;
  }
  iVar0 = func_288();
  if (iVar0 == -1)
  {
    DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, "ItemListEntryIndex", iParam1);
  }
  else if (DATABINDING::_VIRTUAL_COLLECTION_EXISTS(func_288()))
  {
    DATABINDING::_VIRTUAL_COLLECTION_SET_INTEREST_INDEX(func_288(), iParam1);
  }
  return 1;
}