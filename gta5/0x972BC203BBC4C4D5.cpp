// appcovertops.ysc @ L6721
void func_217(int iParam0, int iParam1, float* fParam2, bool bParam3)
{
  int iVar0;
  var uVar1;
  
  iVar0 = func_218(iParam0);
  uVar1 = *fParam2;
  if (!NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT_HASH(iVar0, iParam1, fParam2))
  {
    if (bParam3)
    {
    }
    return;
    *fParam2 = uVar1;
  }
  else
  {
    NETWORK::_NETWORK_REGISTER_TUNABLE_BOOL_HASH(iVar0, iParam1, fParam2);
  }
  if (bParam3)
  {
  }
}