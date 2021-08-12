// bjack_sp.ysc @ L20956
int func_707(int iParam0)
{
  if (iParam0 == 0)
  {
  }
  else if (NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iParam0) == 0)
  {
    return 1;
  }
  return 0;
}