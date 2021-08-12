// appcamera.ysc @ L2126
void func_20()
{
  iLocal_121 = 1;
  iLocal_122 = 1;
  iLocal_123 = 1;
  iLocal_124 = 1;
  iLocal_125 = 0;
  Global_19735 = { Global_19751[Global_19743 /*3*/] };
  func_110(0, 1);
  func_117(0, 0);
  func_121(0);
  iLocal_115 = 0;
  func_112(1);
  if (!MISC::IS_BIT_SET(Global_7669, 28))
  {
    if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() == 0)
    {
      if (MISC::IS_XBOX360_VERSION())
      {
        if (iLocal_117 == 0)
        {
          iLocal_117 = 1;
        }
      }
    }
  }
}