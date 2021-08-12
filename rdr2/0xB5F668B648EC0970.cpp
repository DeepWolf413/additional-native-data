// property_use_core.ysc @ L7443
int func_286(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar0 = func_646();
  iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, -804795275);
  iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, 1184271882);
  iVar2 = (iVar2 + iVar0);
  iVar2 = func_647(iVar2, 1, iVar1);
  func_648(uParam0, iVar2);
  return 1;
}