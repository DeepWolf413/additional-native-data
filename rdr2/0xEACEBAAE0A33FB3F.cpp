// ambush_exc_bridge_trap.ysc @ L3530
void func_138(int iParam0, var uParam1)
{
  if (iParam0->f_16 != 0 || *uParam1 != 0)
  {
    Global_1935630.f_30 = 0;
    Global_1935630.f_31 = 0;
    Global_1935630.f_25 = 0;
    Global_1935630.f_39 = 0;
    iParam0->f_8 = func_188();
    PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
  }
  iParam0->f_2 = 0;
  iParam0->f_3 = 0;
  iParam0->f_5 = 0;
  iParam0->f_10 = 0;
  func_277(iParam0, 0);
  *uParam1 = 0;
  iParam0->f_16 = 0;
}