// heist_island_planning.ysc @ L13423
int func_481()
{
  var uVar0;
  struct<10> Var1;
  
  if (func_496())
  {
    if (func_495())
    {
      func_483(396623013, Global_262145.f_29412, &uVar0, 0, 1, 0);
    }
    else
    {
      Var1 = -1;
      Var1.f_1 = -1;
      Var1.f_2 = -1;
      Var1.f_3 = -1;
      Var1.f_4 = -1;
      Var1.f_5 = -1;
      Var1.f_6 = -1;
      Var1.f_7 = -1;
      Var1.f_8 = -1;
      Var1.f_9 = -1;
      func_482(&Var1);
      Var1.f_7 = Global_262145.f_29412;
      MONEY::_NETWORK_SPENT_ISLAND_HEIST(Global_262145.f_29412, 0, 1, &Var1);
    }
    return 1;
  }
  return 0;
}