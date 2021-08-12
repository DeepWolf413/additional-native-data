// abigail2_1.ysc @ L46302
int func_1130(int iParam0, var uParam1, var uParam2, int iParam3)
{
  var uVar0;
  struct<14> Var1;

  if (iParam0 == 0)
  {
    return 0;
  }
  if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
  {
    return 0;
  }
  func_1593(uParam1);
  if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
  {
    return 0;
  }
  Var1.f_2.f_1 = 10;
  Var1 = iParam3;
  Var1.f_2 = { *uParam1 };
  func_1594(uParam2, iParam0, Var1);
  return 1;
}