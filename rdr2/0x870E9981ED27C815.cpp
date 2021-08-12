// act_caunc_rustling_invite.ysc @ L5311
bool func_152(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
  int iVar0[4];
  int iVar5[4];

  if (func_58(vParam0))
  {
    return false;
  }
  iVar0[0] = iParam4;
  iVar5[0] = 16384;
  iVar5[1] = iParam5;
  if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
  {
    return true;
  }
  return false;
}