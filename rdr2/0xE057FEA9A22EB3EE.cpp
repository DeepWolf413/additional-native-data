// blackwater.ysc @ L1528
void func_52()
{
  if (!func_57(45))
  {
    if (Global_1934765.f_292)
    {
      MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BLACKWATER_ENDSUM"));
      Global_1934765.f_292 = 0;
    }
    if (!Global_1934765.f_291)
    {
      MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BLACKWATER_REGULAR"), -811f, -1212.5f, 0, 0);
      Global_1934765.f_291 = 1;
    }
  }
  else
  {
    if (!Global_1934765.f_292)
    {
      MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BLACKWATER_ENDSUM"), -811f, -1212.5f, 0, 0);
      Global_1934765.f_292 = 1;
    }
    if (Global_1934765.f_291)
    {
      MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BLACKWATER_REGULAR"));
      Global_1934765.f_291 = 0;
    }
  }
}