// am_airstrike.ysc @ L1880
int func_56(int iParam0)
{
  if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
  {
    return 1;
  }
  if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
  }
  return 0;
}