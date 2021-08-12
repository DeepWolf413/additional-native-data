// act_cinema.ysc @ L87592
int func_537(var uParam0, bool bParam1)
{
  var uVar0;
  struct<3> Var1;
  float fVar4;
  
  if (func_543(*uParam0))
  {
    if (bParam1)
    {
      Var1 = { *uParam0 };
      fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
      func_542(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 0, fVar4);
      if (func_538(Var1, &uVar0) || func_543(Var1))
      {
        Var1 = { *uParam0 };
        func_542(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 1, fVar4);
      }
      *uParam0 = { Var1 };
    }
  }
  return 0;
}