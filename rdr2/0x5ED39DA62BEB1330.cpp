// player_menu.ysc @ L1882
void func_83(int iParam0)
{
  var uVar0;
  struct<22> Var1;
  struct<5> Var23;

  uVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
  StringCopy(&(Var1.f_7), NETWORK::_0xE59F4924BD3A718D(uVar0), 64);
  NETWORK::_0x16EFB123C4451032(uVar0, &Var1);
  StringCopy(&(Var1.f_17), NETWORK::_0xE79BA3BC265895DA(uVar0), 24);
  Var1.f_15 = iParam0;
  Var1.f_21 = NETWORK::_0x5ED39DA62BEB1330(uVar0);
  Var23.f_2 = -1;
  Var23.f_3 = -1;
  Var23.f_4 = -1;
  func_118(&Var1, &Var23);
}