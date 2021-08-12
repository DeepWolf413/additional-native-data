// main.ysc @ L14462
void func_311(bool bParam0)
{
  if (Global_1879534 == bParam0)
  {
    return;
  }
  Global_1879534 = bParam0;
  TELEMETRY::_0xEC0BD8736DCAF841(bParam0);
  if (func_17(32768) && !bParam0)
  {
    if (Global_1879534.f_7301.f_1)
    {
      Global_1879534.f_7301.f_1 = 0;
    }
    if (Global_1879534.f_1)
    {
      Global_1879534.f_1 = 0;
    }
  }
}