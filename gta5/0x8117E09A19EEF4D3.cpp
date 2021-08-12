// arena_carmod.ysc @ L135619
int func_1217(int iParam0)
{
  struct<6> Var0;
  struct<7> Var7;
  int iVar14;
  
  if (Global_2544210.f_5179)
  {
    return Global_2544210.f_5180;
  }
  CLOCK::GET_UTC_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
  Var7 = { func_1218(iParam0) };
  if (Var7 != 0)
  {
    iVar14 = func_1230(&Var7, &Var0);
    if (iVar14 < Global_262145.f_10382)
    {
      return 1;
    }
  }
  return 0;
}