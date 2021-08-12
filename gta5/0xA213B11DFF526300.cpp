// ingamehud.ysc @ L21586
void func_500()
{
  if (Global_2464702 == 0)
  {
    if ((Global_151128 && NETWORK::_0xD313DE83394AF134() == 1) && DLC::_0xA213B11DFF526300() == 0)
    {
      if ((LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE() == 0 && Global_2465043 == 0) && func_487() == 0)
      {
        func_501(30, 1, -1);
        Global_2464702 = 1;
      }
    }
  }
}