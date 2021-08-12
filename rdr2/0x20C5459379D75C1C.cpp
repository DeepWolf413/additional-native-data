// event_area_appleseed_stg1.ysc @ L32028
void func_1045(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
    PED::_0x20C5459379D75C1C(*iParam0, "LOG_WRK_ACC_OBS");
    PED::_0xA3C53CDE922BC78B(*iParam0, "LOG_WRK_ACC_OBS");
  }
  else
  {
    PED::SET_PED_CONFIG_FLAG(*iParam0, 178, true);
    PED::_0x20C5459379D75C1C(*iParam0, "");
    PED::_0xA3C53CDE922BC78B(*iParam0, "");
  }
  PED::_0x8AF46E5159A5B620(*iParam0, 291934926);
  func_243(*iParam0, 1, 1);
}