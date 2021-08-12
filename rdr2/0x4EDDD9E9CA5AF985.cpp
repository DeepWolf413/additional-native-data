// av_starting_to_rain.ysc @ L1888
int func_32(var uParam0, var uParam1)
{
  func_72(uParam0, 0, 0, 0);
  if (iLocal_37 != 0)
  {
    if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_37, false))
    {
      STREAMING::_0x4EDDD9E9CA5AF985(iLocal_37);
    }
  }
  return 1;
}