// appmpjoblistnew.ysc @ L46429
void func_532(int iParam0)
{
  int iVar0;
  
  iVar0 = NETWORK::_0x742B58F723233ED9(iParam0);
  if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
  {
    return;
  }
  if (NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(iVar0))
  {
    return;
  }
}