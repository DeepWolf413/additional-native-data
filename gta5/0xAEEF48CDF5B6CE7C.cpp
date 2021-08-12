// appmpjoblistnew.ysc @ L38650
int func_364(int iParam0)
{
  if (MISC::IS_PS3_VERSION() || (MISC::IS_ORBIS_VERSION() && iParam0 == 0))
  {
    if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0 || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) == 0)
    {
      return 0;
    }
  }
  else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0)
  {
    return 0;
  }
  if (func_365() == 0)
  {
    return 0;
  }
  return 1;
}