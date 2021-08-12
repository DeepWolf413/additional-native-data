// fishing_core.ysc @ L19074
int func_691(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
  var uVar0;
  struct<15> Var1;

  if (iParam0 == 0)
  {
    return 0;
  }
  if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
  {
    return 0;
  }
  if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
  {
    return 1;
  }
  if (!NETWORK::_0x271F95E55C663B8B(&uVar0, uParam1))
  {
    return 0;
  }
  Var1.f_1 = 10;
  Var1.f_14 = 255;
  Var1.f_12 = iParam2;
  Var1.f_14 = iParam3;
  Var1.f_13 = iParam4;
  func_954(uParam1, iParam0, Var1);
  return 1;
}