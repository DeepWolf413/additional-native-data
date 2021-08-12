// am_mp_arcade_love_meter.ysc @ L83604
void func_603(int iParam0, int iParam1)
{
  struct<13> Var0;
  struct<11> Var13;
  
  Var0 = { func_570(Local_361.f_21) };
  Var13 = Local_355.f_1;
  Var13.f_1 = Local_355.f_1;
  Var13.f_2 = iParam0;
  Var13.f_3 = func_604(3, 5, 0, -1);
  Var13.f_4 = func_604(3, 1, 0, -1);
  Var13.f_5 = func_604(3, 6, 0, -1);
  Var13.f_6 = func_604(3, 4, 0, -1);
  Var13.f_7 = func_604(3, 7, 0, -1);
  Var13.f_8 = func_604(3, 2, 0, -1);
  if (iParam0 == iParam1)
  {
    if (iParam0 == 1 || iParam0 == 0)
    {
      Var13.f_10 = 1;
    }
    if (iParam0 == 10)
    {
      Var13.f_9 = 1;
    }
  }
  STATS::_0x4FCDBD3F0A813C25(&Var0, &Var13);
}