// fmmc_launcher.ysc @ L349946
int func_5352(int iParam0)
{
  int iVar0;
  
  if (MISC::IS_DURANGO_VERSION())
  {
    NETWORK::_0x1F7BC3539F9E0224();
    iVar0 = NETWORK::_0x0CF6CC51AA18F0F8(0, 512, iParam0);
    return iVar0;
  }
  return 1;
}