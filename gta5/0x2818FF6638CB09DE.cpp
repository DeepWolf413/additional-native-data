// am_mp_car_meet_property.ysc @ L460655
void func_6753(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
  struct<13> Var0;
  
  if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    return;
  }
  Var0 = iParam0;
  Var0.f_2 = uParam1;
  Var0.f_1 = func_6755(1);
  Var0.f_9 = 0;
  Var0.f_3 = uParam2;
  Var0.f_7 = uParam3;
  Var0.f_8 = uParam4;
  Var0.f_6 = -2;
  Var0.f_10 = uParam5;
  Var0.f_11 = uParam6;
  Var0.f_12 = uParam7;
  if (func_1003(1))
  {
    Var0.f_4 = func_4871(func_899());
    Var0.f_5 = func_4870(func_899());
    Var0.f_6 = func_6754();
  }
  STATS::_0x2818FF6638CB09DE(&Var0);
}