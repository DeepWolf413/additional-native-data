// ambient_load.ysc @ L2834
void func_104(int iParam0)
{
  int iVar0;

  if (func_109() != 0 || func_13() != 0)
  {
    return;
  }
  iVar0 = iParam0;
  if (!Global_1225639.f_21[iVar0])
  {
    func_110(iParam0);
    return;
  }
  if (Global_1058888.f_42357.f_1[iVar0 /*5*/] == 1)
  {
    return;
  }
  func_111(iVar0);
  NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
  Global_1058888.f_42357.f_1[iVar0 /*5*/] = 1;
}