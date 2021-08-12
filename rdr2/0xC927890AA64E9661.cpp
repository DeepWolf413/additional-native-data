// startup.ysc @ L12748
var func_502(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
  struct<10> Var0;
  struct<10> Var13;
  var uVar23;

  Var0 = -2;
  Var0 = uParam11;
  Var0.f_1 = uParam12;
  Var0.f_2 = uParam13;
  Var0.f_3 = iParam15;
  Var0.f_9 = iParam7;
  Var0.f_9.f_1 = uParam8;
  Var0.f_9.f_2 = uParam9;
  Var0.f_9.f_3 = uParam10;
  Var0.f_4.f_2 = uParam18;
  Var13.f_9 = 1;
  Var13 = uParam14;
  Var13.f_1 = sParam0;
  Var13.f_2 = sParam1;
  Var13.f_3 = 0;
  Var13.f_4 = uParam2;
  Var13.f_5 = uParam3;
  Var13.f_6 = uParam4;
  Var13.f_7 = uParam5;
  Var13.f_8 = uParam6;
  Var13.f_9 = uParam19;
  uVar23 = UIFEED::_SHOW_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
  return uVar23;
}