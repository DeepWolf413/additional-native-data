// carmodydell.ysc @ L822
void func_28(int iParam0)
{
  int iVar0;
  int iVar1;

  if (func_20() != -1)
  {
    return;
  }
  iVar0 = 869;
  iVar1 = func_47(iVar0);
  if (!func_48(iVar1, 0))
  {
    func_56(iVar0, iLocal_16, 1);
    func_56(740, iLocal_16, 0);
    func_56(737, iLocal_16, 0);
    VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_16, 3, 1);
    VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, func_57(740));
    VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, func_57(737));
    PED::_0x931B241409216C1F(func_47(iVar0), func_47(737), 0);
  }
}