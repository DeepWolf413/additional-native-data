// am_launcher.ysc @ L3906
int func_104(int iParam0, int iParam1, int iParam2, struct<3> Param3)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  NETWORK::_0xE42D626EEC94E5D9(Param3, 0, &iVar0, &iVar1, &iVar2);
  if ((iParam0 <= (func_101(0) - iVar0) && iParam1 <= (func_101(1) - iVar1)) && iParam2 <= (func_101(2) - iVar2))
  {
    return 1;
  }
  return 0;
}