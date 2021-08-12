// am_casino_limo.ysc @ L50868
void func_515()
{
  if (!func_516())
  {
    return;
  }
  if (!func_623(3))
  {
    if (func_299(func_10()) && func_299(func_8()))
    {
      NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_10(), false);
      NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_8(), false);
      func_140(3);
    }
  }
}