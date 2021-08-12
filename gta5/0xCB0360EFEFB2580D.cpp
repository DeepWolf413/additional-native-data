// am_mp_casino_nightclub.ysc @ L368221
void func_5214(var uParam0, int iParam1)
{
  int iVar0;
  float fVar1;
  struct<3> Var2;
  struct<3> Var5;
  
  if (!func_4801(&(uParam0->f_761.f_10)) || iParam1)
  {
    PAD::_0xCB0360EFEFB2580D(0);
    return;
  }
  iVar0 = func_5208(&(uParam0->f_761.f_10), 0, 0);
  fVar1 = func_1698((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam0->f_761.f_9)), 0f, 1f);
  Var2 = { func_5217() };
  if (fVar1 >= 1f && !func_5216(uParam0->f_761.f_3, Var2))
  {
    fVar1 = 0f;
    func_4800(&(uParam0->f_761.f_10));
    func_4799(&(uParam0->f_761.f_10), 0, 0);
    uParam0->f_761.f_9 = 500;
    uParam0->f_761.f_6 = { uParam0->f_761.f_3 };
    uParam0->f_761.f_3 = { Var2 };
  }
  Var5 = { func_5215(uParam0->f_761.f_6, uParam0->f_761.f_3, SYSTEM::POW(fVar1, 1.5f)) };
  PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(0, Var5.x, Var5.f_1, Var5.f_2);
  uParam0->f_761 = { Var5 };
}