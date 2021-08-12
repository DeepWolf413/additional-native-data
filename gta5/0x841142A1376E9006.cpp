// am_mp_property_int.ysc @ L187993
void func_1873(bool bParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  struct<3> Var4;
  
  iVar0 = 1;
  iVar1 = func_1876(iLocal_523);
  iVar2 = 1;
  if (bParam0)
  {
    iVar3 = iVar0;
    iVar0 = iVar1;
    iVar1 = iVar3;
    iVar2 = -1;
  }
  iVar0 = func_1874(iParam1);
  TASK::TASK_FLUSH_ROUTE();
  while (iVar0 != (iVar1 + iVar2))
  {
    Var4 = { func_1877(iLocal_523, iVar0) };
    TASK::TASK_EXTEND_ROUTE(Var4);
    iVar0 = (iVar0 + iVar2);
  }
  TASK::TASK_FOLLOW_POINT_ROUTE(iParam1, 1f, 0);
}