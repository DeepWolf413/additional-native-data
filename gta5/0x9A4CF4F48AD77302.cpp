// act_cinema.ysc @ L116311
int func_1138()
{
  if (func_1139())
  {
    return 0;
  }
  if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
  {
    return 0;
  }
  return 1;
}