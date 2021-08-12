// av_hobo_train_hop.ysc @ L2607
bool func_53(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  iVar0 = VEHICLE::_0x635423D55CA84FC8(iParam0);
  iVar2 = 1;
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    iVar3 = VEHICLE::_0x8DF5F6A19F99F0D5(iParam0, iVar1);
    STREAMING::REQUEST_MODEL(iVar3, false);
    if (!STREAMING::HAS_MODEL_LOADED(iVar3))
    {
      iVar2 = 0;
    }
    iVar1++;
  }
  return iVar2;
}