// property_use_core.ysc @ L34110
bool func_1215(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if (!func_712(uParam0, &iVar0))
  {
    return false;
  }
  iVar1 = func_1714(-1352600334);
  DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, iParam1, iVar1, iVar0);
  DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam1, iVar1, iVar0);
  return true;
}