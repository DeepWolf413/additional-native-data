// agency_heist3b.ysc @ L137735
bool func_1064(int* iParam0)
{
  if (func_1065())
  {
    *iParam0 = 10;
    return 1;
  }
  return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(iParam0);
}