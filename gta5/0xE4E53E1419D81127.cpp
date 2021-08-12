// am_armwrestling.ysc @ L117367
void func_913(int iParam0, int iParam1, var uParam2, bool bParam3)
{
  int iVar0;
  
  iVar0 = func_914(iParam0);
  if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST_HASH(iVar0, iParam1))
  {
    if (bParam3)
    {
    }
    return;
  }
  else
  {
    *uParam2 = NETWORK::NETWORK_ACCESS_TUNABLE_BOOL_HASH(iVar0, iParam1);
    unk_0x3F5EA4DC99C798CC(iVar0, iParam1, uParam2);
  }
  if (bParam3)
  {
  }
}