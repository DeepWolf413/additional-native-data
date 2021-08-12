// act_cinema.ysc @ L85985
void func_504(int iParam0)
{
  if (Global_2405077.f_681 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405077.f_680) < 30000)
  {
    if (iParam0 == -1 || (iParam0 > -1 && Global_2405077.f_681 < iParam0))
    {
      Global_2405077.f_675 = 2;
    }
    else
    {
      Global_2405077.f_675 = 5;
    }
  }
  else
  {
    Global_2405077.f_675 = 5;
  }
}