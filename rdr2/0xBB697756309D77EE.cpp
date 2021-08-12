// main.ysc @ L1776
void func_29(bool bParam0, int iParam1, int iParam2)
{
  int iVar0;

  Global_1879534.f_7301 = 1;
  Global_1879534.f_7301.f_1 = 0;
  func_114(iParam2);
  func_115(bParam0, iParam1, 1);
  func_116();
  func_117();
  iVar0 = 0;
  if (iParam1 != -1)
  {
    iVar0 = 0;
  }
  MISC::SET_BIT(&(Global_1879534.f_7301.f_2[iVar0 /*4*/]), 1);
  NETWORK::_0xA95470DA137587F5(0);
  NETWORK::_0xBB697756309D77EE(0);
}