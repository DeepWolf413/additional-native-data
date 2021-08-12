// am_armwrestling.ysc @ L117741
void func_916(int iParam0, int iParam1, int* iParam2, bool bParam3)
{
  int iVar0;
  var uVar1;
  
  iVar0 = func_914(iParam0);
  uVar1 = *iParam2;
  if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(iVar0, iParam1, iParam2))
  {
    if (bParam3)
    {
    }
    return;
    *iParam2 = uVar1;
  }
  else
  {
    NETWORK::_NETWORK_REGISTER_TUNABLE_INT_HASH(iVar0, iParam1, iParam2);
  }
  if (bParam3)
  {
  }
}