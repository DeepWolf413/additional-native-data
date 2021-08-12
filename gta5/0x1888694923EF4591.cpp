// fmmc_launcher.ysc @ L634902
void func_10658(bool bParam0)
{
  if (bParam0)
  {
    if (Local_17770 != 0)
    {
      func_10660(Global_2453903.f_3470, 68);
      NETWORK::_0x1888694923EF4591();
    }
    Global_2453903.f_3470 = func_21();
    func_10659();
  }
  else if (Local_17770 != 0 && Global_2453903.f_3470.f_1 != func_21())
  {
    func_10660(Global_2453903.f_3470.f_1, 68);
  }
  Global_2453903.f_3470.f_1 = func_21();
  Local_17770.f_1 = 0;
  Local_17770 = 0;
}