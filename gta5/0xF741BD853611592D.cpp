// fmmc_launcher.ysc @ L103065
void func_605(bool bParam0)
{
  if (bParam0)
  {
    if (STREAMING::_GET_GLOBAL_WATER_TYPE() != 1)
    {
      if (!func_606())
      {
        STREAMING::_LOAD_GLOBAL_WATER_TYPE(1);
      }
    }
  }
  else if (STREAMING::_GET_GLOBAL_WATER_TYPE() != 0)
  {
    STREAMING::_LOAD_GLOBAL_WATER_TYPE(0);
  }
}